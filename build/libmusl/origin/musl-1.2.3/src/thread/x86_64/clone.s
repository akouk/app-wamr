.text
.global __clone
.hidden __clone
.type   __clone,@function
/* call conv:   rdi         rsi         rdx         rcx       r8       r9      8(%rsp) */
/* clone wrap:  func        stack       flags       arg       ptid     tls     ctid    */
/* sys_clone:   flags       stack       ptid        ctid      tls                      */

__clone:
    mov %rdi,%r11
    mov %rdx,%rdi       /* rdi=flags */
    mov %r8,%rdx        /* rdx=&ptid */
    mov %r9,%r8         /* r8=tls    */
    mov 8(%rsp),%r10
    mov %r11,%r9
    and $-16,%rsi       /* rsi=stack */
    sub $16,%rsi
    mov %rcx,8(%rsi)    /* push the argument onto the child’s stack */
    mov %r9,0(%rsi)     /* push the function pointer                */
    mov %r10,%rcx       /* rcx=&ctid                                */
    /*
     * Normally this wrapper will execute the clone system call.
     * In Linux, when switching to kernel mode, the instructions
     * are executed on another stack, the "kernel stack". In Unikraft
     * we use the same stack, that's the beauty of single address
     * space operating systems. However, there is a catch here. What
     * if when we execute `uk_syscall_r_clone()'  a `movaps` instruction
     * (https://www.felixcloutier.com/x86/movaps)  is used. These type
     * of instructions assume the stack is aligned. A big error will
     * appear in our case because we would not have the stack aligned.
     * The function that calls this wrapper puts an argument on the stack,
     * i.e. only 8 bytes. To make everyone happy, we align the stack to
     * 16 bytes. Please note that we are talking here about the parent's
     * stack, not the child's stack which we clearly aligned before.
     */
    sub $8,%rsp
    call uk_syscall_r_clone
    test %eax,%eax
    jnz 1f          /* the parent jumps, the child doesn’t   */
    xor %ebp,%ebp
    pop %r9         /* extract the function in child context */
    pop %rdi        /* extract the argument                  */
    call *%r9       /* call function                         */
    mov %eax,%edi
    xor %eax,%eax
    call uk_syscall_r_exit
    hlt
1:  add $8,%rsp
    ret
