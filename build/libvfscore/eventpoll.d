cmd_/home/anisa/ChallengePort/apps/app-wamr/build/libvfscore/eventpoll.o := /bin/bash /home/anisa/ChallengePort/apps/app-wamr/build/libvfscore/eventpoll.o.cmd

source_/home/anisa/ChallengePort/apps/app-wamr/build/libvfscore/eventpoll.o := /home/anisa/ChallengePort/unikraft/lib/vfscore/eventpoll.c

deps_/home/anisa/ChallengePort/apps/app-wamr/build/libvfscore/eventpoll.o := \
  /home/anisa/ChallengePort/unikraft/lib/vfscore/include/vfscore/eventpoll.h \
  /home/anisa/ChallengePort/unikraft/include/uk/essentials.h \
    $(wildcard include/config/libnewlibc.h) \
    $(wildcard include/config/have/sched.h) \
  /home/anisa/ChallengePort/unikraft/include/uk/config.h \
  /home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include/uk/asm/compiler.h \
  /home/anisa/ChallengePort/unikraft/include/uk/arch/types.h \
  /home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include/uk/asm/intsizes.h \
  /home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include/uk/asm/types.h \
  /home/anisa/ChallengePort/unikraft/include/uk/arch/time.h \
  /home/anisa/ChallengePort/unikraft/include/uk/arch/limits.h \
  /home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include/uk/asm/limits.h \
    $(wildcard include/config/stack/size/page/order.h) \
  /home/anisa/ChallengePort/unikraft/include/uk/arch/spinlock.h \
    $(wildcard include/config/have/smp.h) \
  /home/anisa/ChallengePort/unikraft/include/uk/arch/lcpu.h \
  /home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include/uk/asm/lcpu.h \
  /home/anisa/ChallengePort/unikraft/include/uk/list.h \
  /home/anisa/ChallengePort/unikraft/include/uk/arch/atomic.h \
  /home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include/uk/asm/atomic.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/dirent/include/stddef.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/x86_64/bits/alltypes.h \
  /home/anisa/ChallengePort/unikraft/include/uk/compat_list.h \
  /home/anisa/ChallengePort/unikraft/lib/uklock/include/uk/mutex.h \
    $(wildcard include/config/libuklock/mutex.h) \
    $(wildcard include/config/libuklock/mutex/metrics.h) \
  /home/anisa/ChallengePort/unikraft/lib/ukdebug/include/uk/assert.h \
    $(wildcard include/config/libukdebug/enable/assert.h) \
  /home/anisa/ChallengePort/unikraft/include/uk/plat/bootstrap.h \
  /home/anisa/ChallengePort/unikraft/lib/ukdebug/include/uk/print.h \
    $(wildcard include/config/libukdebug/printd.h) \
    $(wildcard include/config/libukdebug/printk/crit.h) \
    $(wildcard include/config/libukdebug/printk/err.h) \
    $(wildcard include/config/libukdebug/printk/warn.h) \
    $(wildcard include/config/libukdebug/printk/info.h) \
    $(wildcard include/config/libukdebug/printk.h) \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mq/include/stdarg.h \
  /home/anisa/ChallengePort/unikraft/include/uk/plat/lcpu.h \
  /home/anisa/ChallengePort/unikraft/lib/uksched/include/uk/thread.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/dirent/include/stdint.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/x86_64/bits/stdint.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/core/include/stdbool.h \
  /home/anisa/ChallengePort/unikraft/lib/ukalloc/include/uk/alloc.h \
    $(wildcard include/config/libukalloc/ifstats.h) \
    $(wildcard include/config/libukalloc/ifmalloc.h) \
    $(wildcard include/config/libukalloc/ifstats/perlib.h) \
    $(wildcard include/config/libukalloc/ifstats/global.h) \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mq/include/errno.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/core/include/features.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/generic/bits/errno.h \
  /home/anisa/ChallengePort/unikraft/include/uk/arch/ctx.h \
    $(wildcard include/config/libukdebug.h) \
  /home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include/uk/asm/ctx.h \
  /home/anisa/ChallengePort/unikraft/include/uk/plat/tls.h \
  /home/anisa/ChallengePort/unikraft/include/uk/arch/tls.h \
    $(wildcard include/config/ukarch/tls/have/tcb.h) \
  /home/anisa/ChallengePort/unikraft/lib/uksched/include/uk/wait_types.h \
  /home/anisa/ChallengePort/unikraft/include/uk/prio.h \
  /home/anisa/ChallengePort/unikraft/lib/uksched/include/uk/wait.h \
  /home/anisa/ChallengePort/unikraft/include/uk/plat/time.h \
    $(wildcard include/config/hz.h) \
  /home/anisa/ChallengePort/unikraft/lib/uksched/include/uk/sched.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/linux/include/sys/epoll.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/core/include/sys/types.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/misc/include/endian.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/select/include/sys/select.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mq/include/fcntl.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/generic/bits/fcntl.h \
  /home/anisa/ChallengePort/unikraft/lib/vfscore/include/vfscore/file.h \
  /home/anisa/ChallengePort/unikraft/lib/vfscore/include/vfscore/dentry.h \
  /home/anisa/ChallengePort/unikraft/lib/vfscore/include/vfscore/vnode.h \
    $(wildcard include/config/libposix/event.h) \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/dirent/include/sys/stat.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/x86_64/bits/stat.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/dirent/include/dirent.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/generic/bits/dirent.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/misc/include/time.h \
  /home/anisa/ChallengePort/unikraft/lib/vfscore/include/vfscore/uio.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stdio/include/sys/uio.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/core/include/limits.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/x86_64/bits/limits.h \
  /home/anisa/ChallengePort/unikraft/lib/ukdebug/include/uk/trace.h \
    $(wildcard include/config/libukdebug/tracepoints.h) \
    $(wildcard include/config/libukdebug/all/tracepoints.h) \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/dirent/include/string.h \
  /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/misc/include/strings.h \

/home/anisa/ChallengePort/apps/app-wamr/build/libvfscore/eventpoll.o: $(deps_/home/anisa/ChallengePort/apps/app-wamr/build/libvfscore/eventpoll.o)

$(deps_/home/anisa/ChallengePort/apps/app-wamr/build/libvfscore/eventpoll.o):
