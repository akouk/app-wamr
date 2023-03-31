/* Automatically generated file; DO NOT EDIT */
#ifndef __LIBSYSCALL_SHIM_PROVIDED_SYSCALLS_H__
#define __LIBSYSCALL_SHIM_PROVIDED_SYSCALLS_H__

#include <uk/bits/syscall_nrs.h>

#ifndef SYS_clone
#ifdef LEGACY_SYS_clone
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'clone': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'clone': No system call number available
#endif  /* LEGACY_SYS_clone */
#else
#define HAVE_uk_syscall_clone t
UK_SYSCALL_E_PROTO(5, clone);
UK_SYSCALL_R_PROTO(5, clone);
#endif /* !SYS_clone */

#ifndef SYS_clone3
#ifdef LEGACY_SYS_clone3
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'clone3': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'clone3': No system call number available
#endif  /* LEGACY_SYS_clone3 */
#else
#define HAVE_uk_syscall_clone3 t
UK_SYSCALL_E_PROTO(2, clone3);
UK_SYSCALL_R_PROTO(2, clone3);
#endif /* !SYS_clone3 */

#ifndef SYS_execve
#ifdef LEGACY_SYS_execve
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'execve': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'execve': No system call number available
#endif  /* LEGACY_SYS_execve */
#else
#define HAVE_uk_syscall_execve t
UK_SYSCALL_E_PROTO(3, execve);
UK_SYSCALL_R_PROTO(3, execve);
#endif /* !SYS_execve */

#ifndef SYS_wait4
#ifdef LEGACY_SYS_wait4
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'wait4': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'wait4': No system call number available
#endif  /* LEGACY_SYS_wait4 */
#else
#define HAVE_uk_syscall_wait4 t
UK_SYSCALL_E_PROTO(4, wait4);
UK_SYSCALL_R_PROTO(4, wait4);
#endif /* !SYS_wait4 */

#ifndef SYS_waitid
#ifdef LEGACY_SYS_waitid
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'waitid': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'waitid': No system call number available
#endif  /* LEGACY_SYS_waitid */
#else
#define HAVE_uk_syscall_waitid t
UK_SYSCALL_E_PROTO(4, waitid);
UK_SYSCALL_R_PROTO(4, waitid);
#endif /* !SYS_waitid */

#ifndef SYS_getpgid
#ifdef LEGACY_SYS_getpgid
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getpgid': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getpgid': No system call number available
#endif  /* LEGACY_SYS_getpgid */
#else
#define HAVE_uk_syscall_getpgid t
UK_SYSCALL_E_PROTO(1, getpgid);
UK_SYSCALL_R_PROTO(1, getpgid);
#endif /* !SYS_getpgid */

#ifndef SYS_setpgid
#ifdef LEGACY_SYS_setpgid
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'setpgid': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'setpgid': No system call number available
#endif  /* LEGACY_SYS_setpgid */
#else
#define HAVE_uk_syscall_setpgid t
UK_SYSCALL_E_PROTO(2, setpgid);
UK_SYSCALL_R_PROTO(2, setpgid);
#endif /* !SYS_setpgid */

#ifndef SYS_setsid
#ifdef LEGACY_SYS_setsid
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'setsid': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'setsid': No system call number available
#endif  /* LEGACY_SYS_setsid */
#else
#define HAVE_uk_syscall_setsid t
UK_SYSCALL_E_PROTO(0, setsid);
UK_SYSCALL_R_PROTO(0, setsid);
#endif /* !SYS_setsid */

#ifndef SYS_getsid
#ifdef LEGACY_SYS_getsid
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getsid': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getsid': No system call number available
#endif  /* LEGACY_SYS_getsid */
#else
#define HAVE_uk_syscall_getsid t
UK_SYSCALL_E_PROTO(1, getsid);
UK_SYSCALL_R_PROTO(1, getsid);
#endif /* !SYS_getsid */

#ifndef SYS_setpriority
#ifdef LEGACY_SYS_setpriority
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'setpriority': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'setpriority': No system call number available
#endif  /* LEGACY_SYS_setpriority */
#else
#define HAVE_uk_syscall_setpriority t
UK_SYSCALL_E_PROTO(3, setpriority);
UK_SYSCALL_R_PROTO(3, setpriority);
#endif /* !SYS_setpriority */

#ifndef SYS_getpriority
#ifdef LEGACY_SYS_getpriority
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getpriority': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getpriority': No system call number available
#endif  /* LEGACY_SYS_getpriority */
#else
#define HAVE_uk_syscall_getpriority t
UK_SYSCALL_E_PROTO(2, getpriority);
UK_SYSCALL_R_PROTO(2, getpriority);
#endif /* !SYS_getpriority */

#ifndef SYS_getpgrp
#ifdef LEGACY_SYS_getpgrp
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getpgrp': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getpgrp': No system call number available
#endif  /* LEGACY_SYS_getpgrp */
#else
#define HAVE_uk_syscall_getpgrp t
UK_SYSCALL_E_PROTO(0, getpgrp);
UK_SYSCALL_R_PROTO(0, getpgrp);
#endif /* !SYS_getpgrp */

#ifndef SYS_getpid
#ifdef LEGACY_SYS_getpid
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getpid': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getpid': No system call number available
#endif  /* LEGACY_SYS_getpid */
#else
#define HAVE_uk_syscall_getpid t
UK_SYSCALL_E_PROTO(0, getpid);
UK_SYSCALL_R_PROTO(0, getpid);
#endif /* !SYS_getpid */

#ifndef SYS_gettid
#ifdef LEGACY_SYS_gettid
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'gettid': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'gettid': No system call number available
#endif  /* LEGACY_SYS_gettid */
#else
#define HAVE_uk_syscall_gettid t
UK_SYSCALL_E_PROTO(0, gettid);
UK_SYSCALL_R_PROTO(0, gettid);
#endif /* !SYS_gettid */

#ifndef SYS_getppid
#ifdef LEGACY_SYS_getppid
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getppid': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getppid': No system call number available
#endif  /* LEGACY_SYS_getppid */
#else
#define HAVE_uk_syscall_getppid t
UK_SYSCALL_E_PROTO(0, getppid);
UK_SYSCALL_R_PROTO(0, getppid);
#endif /* !SYS_getppid */

#ifndef SYS_prlimit64
#ifdef LEGACY_SYS_prlimit64
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'prlimit64': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'prlimit64': No system call number available
#endif  /* LEGACY_SYS_prlimit64 */
#else
#define HAVE_uk_syscall_prlimit64 t
UK_SYSCALL_E_PROTO(4, prlimit64);
UK_SYSCALL_R_PROTO(4, prlimit64);
#endif /* !SYS_prlimit64 */

#ifndef SYS_getrlimit
#ifdef LEGACY_SYS_getrlimit
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getrlimit': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getrlimit': No system call number available
#endif  /* LEGACY_SYS_getrlimit */
#else
#define HAVE_uk_syscall_getrlimit t
UK_SYSCALL_E_PROTO(2, getrlimit);
UK_SYSCALL_R_PROTO(2, getrlimit);
#endif /* !SYS_getrlimit */

#ifndef SYS_setrlimit
#ifdef LEGACY_SYS_setrlimit
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'setrlimit': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'setrlimit': No system call number available
#endif  /* LEGACY_SYS_setrlimit */
#else
#define HAVE_uk_syscall_setrlimit t
UK_SYSCALL_E_PROTO(2, setrlimit);
UK_SYSCALL_R_PROTO(2, setrlimit);
#endif /* !SYS_setrlimit */

#ifndef SYS_getrusage
#ifdef LEGACY_SYS_getrusage
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getrusage': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getrusage': No system call number available
#endif  /* LEGACY_SYS_getrusage */
#else
#define HAVE_uk_syscall_getrusage t
UK_SYSCALL_E_PROTO(2, getrusage);
UK_SYSCALL_R_PROTO(2, getrusage);
#endif /* !SYS_getrusage */

#ifndef SYS_prctl
#ifdef LEGACY_SYS_prctl
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'prctl': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'prctl': No system call number available
#endif  /* LEGACY_SYS_prctl */
#else
#define HAVE_uk_syscall_prctl t
UK_SYSCALL_E_PROTO(5, prctl);
UK_SYSCALL_R_PROTO(5, prctl);
#endif /* !SYS_prctl */

#ifndef SYS_exit
#ifdef LEGACY_SYS_exit
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'exit': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'exit': No system call number available
#endif  /* LEGACY_SYS_exit */
#else
#define HAVE_uk_syscall_exit t
UK_SYSCALL_E_PROTO(1, exit);
UK_SYSCALL_R_PROTO(1, exit);
#endif /* !SYS_exit */

#ifndef SYS_exit_group
#ifdef LEGACY_SYS_exit_group
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'exit_group': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'exit_group': No system call number available
#endif  /* LEGACY_SYS_exit_group */
#else
#define HAVE_uk_syscall_exit_group t
UK_SYSCALL_E_PROTO(1, exit_group);
UK_SYSCALL_R_PROTO(1, exit_group);
#endif /* !SYS_exit_group */

#ifndef SYS_socket
#ifdef LEGACY_SYS_socket
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'socket': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'socket': No system call number available
#endif  /* LEGACY_SYS_socket */
#else
#define HAVE_uk_syscall_socket t
UK_SYSCALL_E_PROTO(3, socket);
UK_SYSCALL_R_PROTO(3, socket);
#endif /* !SYS_socket */

#ifndef SYS_accept
#ifdef LEGACY_SYS_accept
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'accept': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'accept': No system call number available
#endif  /* LEGACY_SYS_accept */
#else
#define HAVE_uk_syscall_accept t
UK_SYSCALL_E_PROTO(3, accept);
UK_SYSCALL_R_PROTO(3, accept);
#endif /* !SYS_accept */

#ifndef SYS_accept4
#ifdef LEGACY_SYS_accept4
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'accept4': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'accept4': No system call number available
#endif  /* LEGACY_SYS_accept4 */
#else
#define HAVE_uk_syscall_accept4 t
UK_SYSCALL_E_PROTO(4, accept4);
UK_SYSCALL_R_PROTO(4, accept4);
#endif /* !SYS_accept4 */

#ifndef SYS_getsockopt
#ifdef LEGACY_SYS_getsockopt
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getsockopt': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getsockopt': No system call number available
#endif  /* LEGACY_SYS_getsockopt */
#else
#define HAVE_uk_syscall_getsockopt t
UK_SYSCALL_E_PROTO(5, getsockopt);
UK_SYSCALL_R_PROTO(5, getsockopt);
#endif /* !SYS_getsockopt */

#ifndef SYS_setsockopt
#ifdef LEGACY_SYS_setsockopt
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'setsockopt': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'setsockopt': No system call number available
#endif  /* LEGACY_SYS_setsockopt */
#else
#define HAVE_uk_syscall_setsockopt t
UK_SYSCALL_E_PROTO(5, setsockopt);
UK_SYSCALL_R_PROTO(5, setsockopt);
#endif /* !SYS_setsockopt */

#ifndef SYS_bind
#ifdef LEGACY_SYS_bind
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'bind': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'bind': No system call number available
#endif  /* LEGACY_SYS_bind */
#else
#define HAVE_uk_syscall_bind t
UK_SYSCALL_E_PROTO(3, bind);
UK_SYSCALL_R_PROTO(3, bind);
#endif /* !SYS_bind */

#ifndef SYS_listen
#ifdef LEGACY_SYS_listen
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'listen': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'listen': No system call number available
#endif  /* LEGACY_SYS_listen */
#else
#define HAVE_uk_syscall_listen t
UK_SYSCALL_E_PROTO(2, listen);
UK_SYSCALL_R_PROTO(2, listen);
#endif /* !SYS_listen */

#ifndef SYS_connect
#ifdef LEGACY_SYS_connect
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'connect': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'connect': No system call number available
#endif  /* LEGACY_SYS_connect */
#else
#define HAVE_uk_syscall_connect t
UK_SYSCALL_E_PROTO(3, connect);
UK_SYSCALL_R_PROTO(3, connect);
#endif /* !SYS_connect */

#ifndef SYS_getpeername
#ifdef LEGACY_SYS_getpeername
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getpeername': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getpeername': No system call number available
#endif  /* LEGACY_SYS_getpeername */
#else
#define HAVE_uk_syscall_getpeername t
UK_SYSCALL_E_PROTO(3, getpeername);
UK_SYSCALL_R_PROTO(3, getpeername);
#endif /* !SYS_getpeername */

#ifndef SYS_getsockname
#ifdef LEGACY_SYS_getsockname
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getsockname': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getsockname': No system call number available
#endif  /* LEGACY_SYS_getsockname */
#else
#define HAVE_uk_syscall_getsockname t
UK_SYSCALL_E_PROTO(3, getsockname);
UK_SYSCALL_R_PROTO(3, getsockname);
#endif /* !SYS_getsockname */

#ifndef SYS_recvfrom
#ifdef LEGACY_SYS_recvfrom
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'recvfrom': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'recvfrom': No system call number available
#endif  /* LEGACY_SYS_recvfrom */
#else
#define HAVE_uk_syscall_recvfrom t
UK_SYSCALL_E_PROTO(6, recvfrom);
UK_SYSCALL_R_PROTO(6, recvfrom);
#endif /* !SYS_recvfrom */

#ifndef SYS_recvmsg
#ifdef LEGACY_SYS_recvmsg
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'recvmsg': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'recvmsg': No system call number available
#endif  /* LEGACY_SYS_recvmsg */
#else
#define HAVE_uk_syscall_recvmsg t
UK_SYSCALL_E_PROTO(3, recvmsg);
UK_SYSCALL_R_PROTO(3, recvmsg);
#endif /* !SYS_recvmsg */

#ifndef SYS_sendto
#ifdef LEGACY_SYS_sendto
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'sendto': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'sendto': No system call number available
#endif  /* LEGACY_SYS_sendto */
#else
#define HAVE_uk_syscall_sendto t
UK_SYSCALL_E_PROTO(6, sendto);
UK_SYSCALL_R_PROTO(6, sendto);
#endif /* !SYS_sendto */

#ifndef SYS_sendmsg
#ifdef LEGACY_SYS_sendmsg
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'sendmsg': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'sendmsg': No system call number available
#endif  /* LEGACY_SYS_sendmsg */
#else
#define HAVE_uk_syscall_sendmsg t
UK_SYSCALL_E_PROTO(3, sendmsg);
UK_SYSCALL_R_PROTO(3, sendmsg);
#endif /* !SYS_sendmsg */

#ifndef SYS_socketpair
#ifdef LEGACY_SYS_socketpair
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'socketpair': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'socketpair': No system call number available
#endif  /* LEGACY_SYS_socketpair */
#else
#define HAVE_uk_syscall_socketpair t
UK_SYSCALL_E_PROTO(4, socketpair);
UK_SYSCALL_R_PROTO(4, socketpair);
#endif /* !SYS_socketpair */

#ifndef SYS_shutdown
#ifdef LEGACY_SYS_shutdown
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'shutdown': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'shutdown': No system call number available
#endif  /* LEGACY_SYS_shutdown */
#else
#define HAVE_uk_syscall_shutdown t
UK_SYSCALL_E_PROTO(2, shutdown);
UK_SYSCALL_R_PROTO(2, shutdown);
#endif /* !SYS_shutdown */

#ifndef SYS_futex
#ifdef LEGACY_SYS_futex
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'futex': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'futex': No system call number available
#endif  /* LEGACY_SYS_futex */
#else
#define HAVE_uk_syscall_futex t
UK_SYSCALL_E_PROTO(6, futex);
UK_SYSCALL_R_PROTO(6, futex);
#endif /* !SYS_futex */

#ifndef SYS_set_tid_address
#ifdef LEGACY_SYS_set_tid_address
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'set_tid_address': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'set_tid_address': No system call number available
#endif  /* LEGACY_SYS_set_tid_address */
#else
#define HAVE_uk_syscall_set_tid_address t
UK_SYSCALL_E_PROTO(1, set_tid_address);
UK_SYSCALL_R_PROTO(1, set_tid_address);
#endif /* !SYS_set_tid_address */

#ifndef SYS_mmap
#ifdef LEGACY_SYS_mmap
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'mmap': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'mmap': No system call number available
#endif  /* LEGACY_SYS_mmap */
#else
#define HAVE_uk_syscall_mmap t
UK_SYSCALL_E_PROTO(6, mmap);
UK_SYSCALL_R_PROTO(6, mmap);
#endif /* !SYS_mmap */

#ifndef SYS_munmap
#ifdef LEGACY_SYS_munmap
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'munmap': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'munmap': No system call number available
#endif  /* LEGACY_SYS_munmap */
#else
#define HAVE_uk_syscall_munmap t
UK_SYSCALL_E_PROTO(2, munmap);
UK_SYSCALL_R_PROTO(2, munmap);
#endif /* !SYS_munmap */

#ifndef SYS_madvise
#ifdef LEGACY_SYS_madvise
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'madvise': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'madvise': No system call number available
#endif  /* LEGACY_SYS_madvise */
#else
#define HAVE_uk_syscall_madvise t
UK_SYSCALL_E_PROTO(3, madvise);
UK_SYSCALL_R_PROTO(3, madvise);
#endif /* !SYS_madvise */

#ifndef SYS_mremap
#ifdef LEGACY_SYS_mremap
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'mremap': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'mremap': No system call number available
#endif  /* LEGACY_SYS_mremap */
#else
#define HAVE_uk_syscall_mremap t
UK_SYSCALL_E_PROTO(5, mremap);
UK_SYSCALL_R_PROTO(5, mremap);
#endif /* !SYS_mremap */

#ifndef SYS_mprotect
#ifdef LEGACY_SYS_mprotect
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'mprotect': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'mprotect': No system call number available
#endif  /* LEGACY_SYS_mprotect */
#else
#define HAVE_uk_syscall_mprotect t
UK_SYSCALL_E_PROTO(3, mprotect);
UK_SYSCALL_R_PROTO(3, mprotect);
#endif /* !SYS_mprotect */

#ifndef SYS_sched_yield
#ifdef LEGACY_SYS_sched_yield
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'sched_yield': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'sched_yield': No system call number available
#endif  /* LEGACY_SYS_sched_yield */
#else
#define HAVE_uk_syscall_sched_yield t
UK_SYSCALL_E_PROTO(0, sched_yield);
UK_SYSCALL_R_PROTO(0, sched_yield);
#endif /* !SYS_sched_yield */

#ifndef SYS_getrandom
#ifdef LEGACY_SYS_getrandom
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getrandom': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getrandom': No system call number available
#endif  /* LEGACY_SYS_getrandom */
#else
#define HAVE_uk_syscall_getrandom t
UK_SYSCALL_E_PROTO(3, getrandom);
UK_SYSCALL_R_PROTO(3, getrandom);
#endif /* !SYS_getrandom */

#ifndef SYS_nanosleep
#ifdef LEGACY_SYS_nanosleep
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'nanosleep': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'nanosleep': No system call number available
#endif  /* LEGACY_SYS_nanosleep */
#else
#define HAVE_uk_syscall_nanosleep t
UK_SYSCALL_E_PROTO(2, nanosleep);
UK_SYSCALL_R_PROTO(2, nanosleep);
#endif /* !SYS_nanosleep */

#ifndef SYS_clock_gettime
#ifdef LEGACY_SYS_clock_gettime
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'clock_gettime': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'clock_gettime': No system call number available
#endif  /* LEGACY_SYS_clock_gettime */
#else
#define HAVE_uk_syscall_clock_gettime t
UK_SYSCALL_E_PROTO(2, clock_gettime);
UK_SYSCALL_R_PROTO(2, clock_gettime);
#endif /* !SYS_clock_gettime */

#ifndef SYS_clock_settime
#ifdef LEGACY_SYS_clock_settime
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'clock_settime': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'clock_settime': No system call number available
#endif  /* LEGACY_SYS_clock_settime */
#else
#define HAVE_uk_syscall_clock_settime t
UK_SYSCALL_E_PROTO(2, clock_settime);
UK_SYSCALL_R_PROTO(2, clock_settime);
#endif /* !SYS_clock_settime */

#ifndef SYS_clock_getres
#ifdef LEGACY_SYS_clock_getres
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'clock_getres': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'clock_getres': No system call number available
#endif  /* LEGACY_SYS_clock_getres */
#else
#define HAVE_uk_syscall_clock_getres t
UK_SYSCALL_E_PROTO(2, clock_getres);
UK_SYSCALL_R_PROTO(2, clock_getres);
#endif /* !SYS_clock_getres */

#ifndef SYS_gettimeofday
#ifdef LEGACY_SYS_gettimeofday
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'gettimeofday': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'gettimeofday': No system call number available
#endif  /* LEGACY_SYS_gettimeofday */
#else
#define HAVE_uk_syscall_gettimeofday t
UK_SYSCALL_E_PROTO(2, gettimeofday);
UK_SYSCALL_R_PROTO(2, gettimeofday);
#endif /* !SYS_gettimeofday */

#ifndef SYS_times
#ifdef LEGACY_SYS_times
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'times': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'times': No system call number available
#endif  /* LEGACY_SYS_times */
#else
#define HAVE_uk_syscall_times t
UK_SYSCALL_E_PROTO(1, times);
UK_SYSCALL_R_PROTO(1, times);
#endif /* !SYS_times */

#ifndef SYS_time
#ifdef LEGACY_SYS_time
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'time': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'time': No system call number available
#endif  /* LEGACY_SYS_time */
#else
#define HAVE_uk_syscall_time t
UK_SYSCALL_E_PROTO(1, time);
UK_SYSCALL_R_PROTO(1, time);
#endif /* !SYS_time */

#ifndef SYS_setitimer
#ifdef LEGACY_SYS_setitimer
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'setitimer': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'setitimer': No system call number available
#endif  /* LEGACY_SYS_setitimer */
#else
#define HAVE_uk_syscall_setitimer t
UK_SYSCALL_E_PROTO(3, setitimer);
UK_SYSCALL_R_PROTO(3, setitimer);
#endif /* !SYS_setitimer */

#ifndef SYS_timer_create
#ifdef LEGACY_SYS_timer_create
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'timer_create': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'timer_create': No system call number available
#endif  /* LEGACY_SYS_timer_create */
#else
#define HAVE_uk_syscall_timer_create t
UK_SYSCALL_E_PROTO(3, timer_create);
UK_SYSCALL_R_PROTO(3, timer_create);
#endif /* !SYS_timer_create */

#ifndef SYS_timer_delete
#ifdef LEGACY_SYS_timer_delete
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'timer_delete': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'timer_delete': No system call number available
#endif  /* LEGACY_SYS_timer_delete */
#else
#define HAVE_uk_syscall_timer_delete t
UK_SYSCALL_E_PROTO(1, timer_delete);
UK_SYSCALL_R_PROTO(1, timer_delete);
#endif /* !SYS_timer_delete */

#ifndef SYS_timer_settime
#ifdef LEGACY_SYS_timer_settime
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'timer_settime': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'timer_settime': No system call number available
#endif  /* LEGACY_SYS_timer_settime */
#else
#define HAVE_uk_syscall_timer_settime t
UK_SYSCALL_E_PROTO(4, timer_settime);
UK_SYSCALL_R_PROTO(4, timer_settime);
#endif /* !SYS_timer_settime */

#ifndef SYS_timer_gettime
#ifdef LEGACY_SYS_timer_gettime
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'timer_gettime': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'timer_gettime': No system call number available
#endif  /* LEGACY_SYS_timer_gettime */
#else
#define HAVE_uk_syscall_timer_gettime t
UK_SYSCALL_E_PROTO(2, timer_gettime);
UK_SYSCALL_R_PROTO(2, timer_gettime);
#endif /* !SYS_timer_gettime */

#ifndef SYS_timer_getoverrun
#ifdef LEGACY_SYS_timer_getoverrun
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'timer_getoverrun': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'timer_getoverrun': No system call number available
#endif  /* LEGACY_SYS_timer_getoverrun */
#else
#define HAVE_uk_syscall_timer_getoverrun t
UK_SYSCALL_E_PROTO(1, timer_getoverrun);
UK_SYSCALL_R_PROTO(1, timer_getoverrun);
#endif /* !SYS_timer_getoverrun */

#ifndef SYS_write
#ifdef LEGACY_SYS_write
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'write': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'write': No system call number available
#endif  /* LEGACY_SYS_write */
#else
#define HAVE_uk_syscall_write t
UK_SYSCALL_E_PROTO(3, write);
UK_SYSCALL_R_PROTO(3, write);
#endif /* !SYS_write */

#ifndef SYS_writev
#ifdef LEGACY_SYS_writev
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'writev': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'writev': No system call number available
#endif  /* LEGACY_SYS_writev */
#else
#define HAVE_uk_syscall_writev t
UK_SYSCALL_E_PROTO(3, writev);
UK_SYSCALL_R_PROTO(3, writev);
#endif /* !SYS_writev */

#ifndef SYS_pwrite64
#ifdef LEGACY_SYS_pwrite64
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'pwrite64': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'pwrite64': No system call number available
#endif  /* LEGACY_SYS_pwrite64 */
#else
#define HAVE_uk_syscall_pwrite64 t
UK_SYSCALL_E_PROTO(4, pwrite64);
UK_SYSCALL_R_PROTO(4, pwrite64);
#endif /* !SYS_pwrite64 */

#ifndef SYS_read
#ifdef LEGACY_SYS_read
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'read': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'read': No system call number available
#endif  /* LEGACY_SYS_read */
#else
#define HAVE_uk_syscall_read t
UK_SYSCALL_E_PROTO(3, read);
UK_SYSCALL_R_PROTO(3, read);
#endif /* !SYS_read */

#ifndef SYS_readv
#ifdef LEGACY_SYS_readv
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'readv': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'readv': No system call number available
#endif  /* LEGACY_SYS_readv */
#else
#define HAVE_uk_syscall_readv t
UK_SYSCALL_E_PROTO(3, readv);
UK_SYSCALL_R_PROTO(3, readv);
#endif /* !SYS_readv */

#ifndef SYS_pread64
#ifdef LEGACY_SYS_pread64
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'pread64': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'pread64': No system call number available
#endif  /* LEGACY_SYS_pread64 */
#else
#define HAVE_uk_syscall_pread64 t
UK_SYSCALL_E_PROTO(4, pread64);
UK_SYSCALL_R_PROTO(4, pread64);
#endif /* !SYS_pread64 */

#ifndef SYS_fstat
#ifdef LEGACY_SYS_fstat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fstat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fstat': No system call number available
#endif  /* LEGACY_SYS_fstat */
#else
#define HAVE_uk_syscall_fstat t
UK_SYSCALL_E_PROTO(2, fstat);
UK_SYSCALL_R_PROTO(2, fstat);
#endif /* !SYS_fstat */

#ifndef SYS_fcntl
#ifdef LEGACY_SYS_fcntl
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fcntl': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fcntl': No system call number available
#endif  /* LEGACY_SYS_fcntl */
#else
#define HAVE_uk_syscall_fcntl t
UK_SYSCALL_E_PROTO(3, fcntl);
UK_SYSCALL_R_PROTO(3, fcntl);
#endif /* !SYS_fcntl */

#ifndef SYS_readlink
#ifdef LEGACY_SYS_readlink
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'readlink': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'readlink': No system call number available
#endif  /* LEGACY_SYS_readlink */
#else
#define HAVE_uk_syscall_readlink t
UK_SYSCALL_E_PROTO(3, readlink);
UK_SYSCALL_R_PROTO(3, readlink);
#endif /* !SYS_readlink */

#ifndef SYS_close
#ifdef LEGACY_SYS_close
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'close': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'close': No system call number available
#endif  /* LEGACY_SYS_close */
#else
#define HAVE_uk_syscall_close t
UK_SYSCALL_E_PROTO(1, close);
UK_SYSCALL_R_PROTO(1, close);
#endif /* !SYS_close */

#ifndef SYS_lseek
#ifdef LEGACY_SYS_lseek
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'lseek': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'lseek': No system call number available
#endif  /* LEGACY_SYS_lseek */
#else
#define HAVE_uk_syscall_lseek t
UK_SYSCALL_E_PROTO(3, lseek);
UK_SYSCALL_R_PROTO(3, lseek);
#endif /* !SYS_lseek */

#ifndef SYS_link
#ifdef LEGACY_SYS_link
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'link': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'link': No system call number available
#endif  /* LEGACY_SYS_link */
#else
#define HAVE_uk_syscall_link t
UK_SYSCALL_E_PROTO(2, link);
UK_SYSCALL_R_PROTO(2, link);
#endif /* !SYS_link */

#ifndef SYS_ftruncate
#ifdef LEGACY_SYS_ftruncate
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'ftruncate': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'ftruncate': No system call number available
#endif  /* LEGACY_SYS_ftruncate */
#else
#define HAVE_uk_syscall_ftruncate t
UK_SYSCALL_E_PROTO(2, ftruncate);
UK_SYSCALL_R_PROTO(2, ftruncate);
#endif /* !SYS_ftruncate */

#ifndef SYS_truncate
#ifdef LEGACY_SYS_truncate
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'truncate': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'truncate': No system call number available
#endif  /* LEGACY_SYS_truncate */
#else
#define HAVE_uk_syscall_truncate t
UK_SYSCALL_E_PROTO(2, truncate);
UK_SYSCALL_R_PROTO(2, truncate);
#endif /* !SYS_truncate */

#ifndef SYS_access
#ifdef LEGACY_SYS_access
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'access': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'access': No system call number available
#endif  /* LEGACY_SYS_access */
#else
#define HAVE_uk_syscall_access t
UK_SYSCALL_E_PROTO(2, access);
UK_SYSCALL_R_PROTO(2, access);
#endif /* !SYS_access */

#ifndef SYS_faccessat
#ifdef LEGACY_SYS_faccessat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'faccessat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'faccessat': No system call number available
#endif  /* LEGACY_SYS_faccessat */
#else
#define HAVE_uk_syscall_faccessat t
UK_SYSCALL_E_PROTO(4, faccessat);
UK_SYSCALL_R_PROTO(4, faccessat);
#endif /* !SYS_faccessat */

#ifndef SYS_fallocate
#ifdef LEGACY_SYS_fallocate
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fallocate': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fallocate': No system call number available
#endif  /* LEGACY_SYS_fallocate */
#else
#define HAVE_uk_syscall_fallocate t
UK_SYSCALL_E_PROTO(4, fallocate);
UK_SYSCALL_R_PROTO(4, fallocate);
#endif /* !SYS_fallocate */

#ifndef SYS_chdir
#ifdef LEGACY_SYS_chdir
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'chdir': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'chdir': No system call number available
#endif  /* LEGACY_SYS_chdir */
#else
#define HAVE_uk_syscall_chdir t
UK_SYSCALL_E_PROTO(1, chdir);
UK_SYSCALL_R_PROTO(1, chdir);
#endif /* !SYS_chdir */

#ifndef SYS_fchdir
#ifdef LEGACY_SYS_fchdir
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fchdir': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fchdir': No system call number available
#endif  /* LEGACY_SYS_fchdir */
#else
#define HAVE_uk_syscall_fchdir t
UK_SYSCALL_E_PROTO(1, fchdir);
UK_SYSCALL_R_PROTO(1, fchdir);
#endif /* !SYS_fchdir */

#ifndef SYS_chmod
#ifdef LEGACY_SYS_chmod
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'chmod': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'chmod': No system call number available
#endif  /* LEGACY_SYS_chmod */
#else
#define HAVE_uk_syscall_chmod t
UK_SYSCALL_E_PROTO(2, chmod);
UK_SYSCALL_R_PROTO(2, chmod);
#endif /* !SYS_chmod */

#ifndef SYS_fchmod
#ifdef LEGACY_SYS_fchmod
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fchmod': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fchmod': No system call number available
#endif  /* LEGACY_SYS_fchmod */
#else
#define HAVE_uk_syscall_fchmod t
UK_SYSCALL_E_PROTO(2, fchmod);
UK_SYSCALL_R_PROTO(2, fchmod);
#endif /* !SYS_fchmod */

#ifndef SYS_dup
#ifdef LEGACY_SYS_dup
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'dup': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'dup': No system call number available
#endif  /* LEGACY_SYS_dup */
#else
#define HAVE_uk_syscall_dup t
UK_SYSCALL_E_PROTO(1, dup);
UK_SYSCALL_R_PROTO(1, dup);
#endif /* !SYS_dup */

#ifndef SYS_dup3
#ifdef LEGACY_SYS_dup3
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'dup3': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'dup3': No system call number available
#endif  /* LEGACY_SYS_dup3 */
#else
#define HAVE_uk_syscall_dup3 t
UK_SYSCALL_E_PROTO(3, dup3);
UK_SYSCALL_R_PROTO(3, dup3);
#endif /* !SYS_dup3 */

#ifndef SYS_dup2
#ifdef LEGACY_SYS_dup2
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'dup2': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'dup2': No system call number available
#endif  /* LEGACY_SYS_dup2 */
#else
#define HAVE_uk_syscall_dup2 t
UK_SYSCALL_E_PROTO(2, dup2);
UK_SYSCALL_R_PROTO(2, dup2);
#endif /* !SYS_dup2 */

#ifndef SYS_pwritev
#ifdef LEGACY_SYS_pwritev
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'pwritev': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'pwritev': No system call number available
#endif  /* LEGACY_SYS_pwritev */
#else
#define HAVE_uk_syscall_pwritev t
UK_SYSCALL_E_PROTO(4, pwritev);
UK_SYSCALL_R_PROTO(4, pwritev);
#endif /* !SYS_pwritev */

#ifndef SYS_utime
#ifdef LEGACY_SYS_utime
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'utime': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'utime': No system call number available
#endif  /* LEGACY_SYS_utime */
#else
#define HAVE_uk_syscall_utime t
UK_SYSCALL_E_PROTO(2, utime);
UK_SYSCALL_R_PROTO(2, utime);
#endif /* !SYS_utime */

#ifndef SYS_utimes
#ifdef LEGACY_SYS_utimes
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'utimes': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'utimes': No system call number available
#endif  /* LEGACY_SYS_utimes */
#else
#define HAVE_uk_syscall_utimes t
UK_SYSCALL_E_PROTO(2, utimes);
UK_SYSCALL_R_PROTO(2, utimes);
#endif /* !SYS_utimes */

#ifndef SYS_mknod
#ifdef LEGACY_SYS_mknod
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'mknod': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'mknod': No system call number available
#endif  /* LEGACY_SYS_mknod */
#else
#define HAVE_uk_syscall_mknod t
UK_SYSCALL_E_PROTO(3, mknod);
UK_SYSCALL_R_PROTO(3, mknod);
#endif /* !SYS_mknod */

#ifndef SYS_rmdir
#ifdef LEGACY_SYS_rmdir
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'rmdir': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'rmdir': No system call number available
#endif  /* LEGACY_SYS_rmdir */
#else
#define HAVE_uk_syscall_rmdir t
UK_SYSCALL_E_PROTO(1, rmdir);
UK_SYSCALL_R_PROTO(1, rmdir);
#endif /* !SYS_rmdir */

#ifndef SYS_rename
#ifdef LEGACY_SYS_rename
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'rename': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'rename': No system call number available
#endif  /* LEGACY_SYS_rename */
#else
#define HAVE_uk_syscall_rename t
UK_SYSCALL_E_PROTO(2, rename);
UK_SYSCALL_R_PROTO(2, rename);
#endif /* !SYS_rename */

#ifndef SYS_fsync
#ifdef LEGACY_SYS_fsync
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fsync': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fsync': No system call number available
#endif  /* LEGACY_SYS_fsync */
#else
#define HAVE_uk_syscall_fsync t
UK_SYSCALL_E_PROTO(1, fsync);
UK_SYSCALL_R_PROTO(1, fsync);
#endif /* !SYS_fsync */

#ifndef SYS_fdatasync
#ifdef LEGACY_SYS_fdatasync
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fdatasync': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fdatasync': No system call number available
#endif  /* LEGACY_SYS_fdatasync */
#else
#define HAVE_uk_syscall_fdatasync t
UK_SYSCALL_E_PROTO(1, fdatasync);
UK_SYSCALL_R_PROTO(1, fdatasync);
#endif /* !SYS_fdatasync */

#ifndef SYS_preadv
#ifdef LEGACY_SYS_preadv
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'preadv': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'preadv': No system call number available
#endif  /* LEGACY_SYS_preadv */
#else
#define HAVE_uk_syscall_preadv t
UK_SYSCALL_E_PROTO(4, preadv);
UK_SYSCALL_R_PROTO(4, preadv);
#endif /* !SYS_preadv */

#ifndef SYS_umask
#ifdef LEGACY_SYS_umask
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'umask': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'umask': No system call number available
#endif  /* LEGACY_SYS_umask */
#else
#define HAVE_uk_syscall_umask t
UK_SYSCALL_E_PROTO(1, umask);
UK_SYSCALL_R_PROTO(1, umask);
#endif /* !SYS_umask */

#ifndef SYS_lstat
#ifdef LEGACY_SYS_lstat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'lstat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'lstat': No system call number available
#endif  /* LEGACY_SYS_lstat */
#else
#define HAVE_uk_syscall_lstat t
UK_SYSCALL_E_PROTO(2, lstat);
UK_SYSCALL_R_PROTO(2, lstat);
#endif /* !SYS_lstat */

#ifndef SYS_flock
#ifdef LEGACY_SYS_flock
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'flock': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'flock': No system call number available
#endif  /* LEGACY_SYS_flock */
#else
#define HAVE_uk_syscall_flock t
UK_SYSCALL_E_PROTO(2, flock);
UK_SYSCALL_R_PROTO(2, flock);
#endif /* !SYS_flock */

#ifndef SYS_getcwd
#ifdef LEGACY_SYS_getcwd
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getcwd': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getcwd': No system call number available
#endif  /* LEGACY_SYS_getcwd */
#else
#define HAVE_uk_syscall_getcwd t
UK_SYSCALL_E_PROTO(2, getcwd);
UK_SYSCALL_R_PROTO(2, getcwd);
#endif /* !SYS_getcwd */

#ifndef SYS_utimensat
#ifdef LEGACY_SYS_utimensat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'utimensat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'utimensat': No system call number available
#endif  /* LEGACY_SYS_utimensat */
#else
#define HAVE_uk_syscall_utimensat t
UK_SYSCALL_E_PROTO(4, utimensat);
UK_SYSCALL_R_PROTO(4, utimensat);
#endif /* !SYS_utimensat */

#ifndef SYS_futimesat
#ifdef LEGACY_SYS_futimesat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'futimesat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'futimesat': No system call number available
#endif  /* LEGACY_SYS_futimesat */
#else
#define HAVE_uk_syscall_futimesat t
UK_SYSCALL_E_PROTO(3, futimesat);
UK_SYSCALL_R_PROTO(3, futimesat);
#endif /* !SYS_futimesat */

#ifndef SYS_sync
#ifdef LEGACY_SYS_sync
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'sync': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'sync': No system call number available
#endif  /* LEGACY_SYS_sync */
#else
#define HAVE_uk_syscall_sync t
UK_SYSCALL_E_PROTO(0, sync);
UK_SYSCALL_R_PROTO(0, sync);
#endif /* !SYS_sync */

#ifndef SYS_mount
#ifdef LEGACY_SYS_mount
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'mount': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'mount': No system call number available
#endif  /* LEGACY_SYS_mount */
#else
#define HAVE_uk_syscall_mount t
UK_SYSCALL_E_PROTO(5, mount);
UK_SYSCALL_R_PROTO(5, mount);
#endif /* !SYS_mount */

#ifndef SYS_ioctl
#ifdef LEGACY_SYS_ioctl
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'ioctl': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'ioctl': No system call number available
#endif  /* LEGACY_SYS_ioctl */
#else
#define HAVE_uk_syscall_ioctl t
UK_SYSCALL_E_PROTO(3, ioctl);
UK_SYSCALL_R_PROTO(3, ioctl);
#endif /* !SYS_ioctl */

#ifndef SYS_statfs
#ifdef LEGACY_SYS_statfs
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'statfs': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'statfs': No system call number available
#endif  /* LEGACY_SYS_statfs */
#else
#define HAVE_uk_syscall_statfs t
UK_SYSCALL_E_PROTO(2, statfs);
UK_SYSCALL_R_PROTO(2, statfs);
#endif /* !SYS_statfs */

#ifndef SYS_fstatfs
#ifdef LEGACY_SYS_fstatfs
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fstatfs': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fstatfs': No system call number available
#endif  /* LEGACY_SYS_fstatfs */
#else
#define HAVE_uk_syscall_fstatfs t
UK_SYSCALL_E_PROTO(2, fstatfs);
UK_SYSCALL_R_PROTO(2, fstatfs);
#endif /* !SYS_fstatfs */

#ifndef SYS_fchown
#ifdef LEGACY_SYS_fchown
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'fchown': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'fchown': No system call number available
#endif  /* LEGACY_SYS_fchown */
#else
#define HAVE_uk_syscall_fchown t
UK_SYSCALL_E_PROTO(3, fchown);
UK_SYSCALL_R_PROTO(3, fchown);
#endif /* !SYS_fchown */

#ifndef SYS_lchown
#ifdef LEGACY_SYS_lchown
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'lchown': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'lchown': No system call number available
#endif  /* LEGACY_SYS_lchown */
#else
#define HAVE_uk_syscall_lchown t
UK_SYSCALL_E_PROTO(3, lchown);
UK_SYSCALL_R_PROTO(3, lchown);
#endif /* !SYS_lchown */

#ifndef SYS_chown
#ifdef LEGACY_SYS_chown
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'chown': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'chown': No system call number available
#endif  /* LEGACY_SYS_chown */
#else
#define HAVE_uk_syscall_chown t
UK_SYSCALL_E_PROTO(3, chown);
UK_SYSCALL_R_PROTO(3, chown);
#endif /* !SYS_chown */

#ifndef SYS_stat
#ifdef LEGACY_SYS_stat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'stat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'stat': No system call number available
#endif  /* LEGACY_SYS_stat */
#else
#define HAVE_uk_syscall_stat t
UK_SYSCALL_E_PROTO(2, stat);
UK_SYSCALL_R_PROTO(2, stat);
#endif /* !SYS_stat */

#ifndef SYS_mkdir
#ifdef LEGACY_SYS_mkdir
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'mkdir': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'mkdir': No system call number available
#endif  /* LEGACY_SYS_mkdir */
#else
#define HAVE_uk_syscall_mkdir t
UK_SYSCALL_E_PROTO(2, mkdir);
UK_SYSCALL_R_PROTO(2, mkdir);
#endif /* !SYS_mkdir */

#ifndef SYS_mkdirat
#ifdef LEGACY_SYS_mkdirat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'mkdirat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'mkdirat': No system call number available
#endif  /* LEGACY_SYS_mkdirat */
#else
#define HAVE_uk_syscall_mkdirat t
UK_SYSCALL_E_PROTO(3, mkdirat);
UK_SYSCALL_R_PROTO(3, mkdirat);
#endif /* !SYS_mkdirat */

#ifndef SYS_umount2
#ifdef LEGACY_SYS_umount2
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'umount2': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'umount2': No system call number available
#endif  /* LEGACY_SYS_umount2 */
#else
#define HAVE_uk_syscall_umount2 t
UK_SYSCALL_E_PROTO(2, umount2);
UK_SYSCALL_R_PROTO(2, umount2);
#endif /* !SYS_umount2 */

#ifndef SYS_pipe2
#ifdef LEGACY_SYS_pipe2
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'pipe2': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'pipe2': No system call number available
#endif  /* LEGACY_SYS_pipe2 */
#else
#define HAVE_uk_syscall_pipe2 t
UK_SYSCALL_E_PROTO(2, pipe2);
UK_SYSCALL_R_PROTO(2, pipe2);
#endif /* !SYS_pipe2 */

#ifndef SYS_symlink
#ifdef LEGACY_SYS_symlink
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'symlink': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'symlink': No system call number available
#endif  /* LEGACY_SYS_symlink */
#else
#define HAVE_uk_syscall_symlink t
UK_SYSCALL_E_PROTO(2, symlink);
UK_SYSCALL_R_PROTO(2, symlink);
#endif /* !SYS_symlink */

#ifndef SYS_unlink
#ifdef LEGACY_SYS_unlink
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'unlink': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'unlink': No system call number available
#endif  /* LEGACY_SYS_unlink */
#else
#define HAVE_uk_syscall_unlink t
UK_SYSCALL_E_PROTO(1, unlink);
UK_SYSCALL_R_PROTO(1, unlink);
#endif /* !SYS_unlink */

#ifndef SYS_chroot
#ifdef LEGACY_SYS_chroot
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'chroot': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'chroot': No system call number available
#endif  /* LEGACY_SYS_chroot */
#else
#define HAVE_uk_syscall_chroot t
UK_SYSCALL_E_PROTO(1, chroot);
UK_SYSCALL_R_PROTO(1, chroot);
#endif /* !SYS_chroot */

#ifndef SYS_getdents
#ifdef LEGACY_SYS_getdents
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getdents': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getdents': No system call number available
#endif  /* LEGACY_SYS_getdents */
#else
#define HAVE_uk_syscall_getdents t
UK_SYSCALL_E_PROTO(3, getdents);
UK_SYSCALL_R_PROTO(3, getdents);
#endif /* !SYS_getdents */

#ifndef SYS_getdents64
#ifdef LEGACY_SYS_getdents64
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'getdents64': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'getdents64': No system call number available
#endif  /* LEGACY_SYS_getdents64 */
#else
#define HAVE_uk_syscall_getdents64 t
UK_SYSCALL_E_PROTO(3, getdents64);
UK_SYSCALL_R_PROTO(3, getdents64);
#endif /* !SYS_getdents64 */

#ifndef SYS_newfstatat
#ifdef LEGACY_SYS_newfstatat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'newfstatat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'newfstatat': No system call number available
#endif  /* LEGACY_SYS_newfstatat */
#else
#define HAVE_uk_syscall_newfstatat t
UK_SYSCALL_E_PROTO(4, newfstatat);
UK_SYSCALL_R_PROTO(4, newfstatat);
#endif /* !SYS_newfstatat */

#ifndef SYS_open
#ifdef LEGACY_SYS_open
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'open': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'open': No system call number available
#endif  /* LEGACY_SYS_open */
#else
#define HAVE_uk_syscall_open t
UK_SYSCALL_E_PROTO(3, open);
UK_SYSCALL_R_PROTO(3, open);
#endif /* !SYS_open */

#ifndef SYS_openat
#ifdef LEGACY_SYS_openat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'openat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'openat': No system call number available
#endif  /* LEGACY_SYS_openat */
#else
#define HAVE_uk_syscall_openat t
UK_SYSCALL_E_PROTO(4, openat);
UK_SYSCALL_R_PROTO(4, openat);
#endif /* !SYS_openat */

#ifndef SYS_pipe
#ifdef LEGACY_SYS_pipe
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'pipe': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'pipe': No system call number available
#endif  /* LEGACY_SYS_pipe */
#else
#define HAVE_uk_syscall_pipe t
UK_SYSCALL_E_PROTO(1, pipe);
UK_SYSCALL_R_PROTO(1, pipe);
#endif /* !SYS_pipe */

#ifndef SYS_creat
#ifdef LEGACY_SYS_creat
#ifdef CONFIG_LIBSYSCALL_SHIM_LEGACY_VERBOSE
#warning Ignoring legacy system call 'creat': No system call number available
#endif /* LIBSYSCALL_SHIM_LEGACY_VERBOSE */
#else
#error Failed to map system call 'creat': No system call number available
#endif  /* LEGACY_SYS_creat */
#else
#define HAVE_uk_syscall_creat t
UK_SYSCALL_E_PROTO(2, creat);
UK_SYSCALL_R_PROTO(2, creat);
#endif /* !SYS_creat */

#endif /* __LIBSYSCALL_SHIM_PROVIDED_SYSCALLS_H__ */
