""gcc  -nostdlib -U __linux__ -U __FreeBSD__ -U __sun__ -fno-stack-protector -Wall -Wextra -D __Unikraft__ -DUK_CODENAME="Epimetheus" -DUK_VERSION=0.12 -DUK_FULLVERSION=0.12.0~5bd4b94d  -fno-builtin-exit -fno-builtin-exit-group -fno-tree-sra -fno-split-stack -nostdinc -O2 -fno-omit-frame-pointer -fno-PIC  -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/x86_64 -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//src/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//src/internal    -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/core/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/core/src/core -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mq/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mq/src/mq -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/dirent/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/dirent/src/dirent -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/misc/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/misc/src/misc -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/temp/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/temp/src/temp -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/multibyte/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/multibyte/src/multibyte -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/process/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/process/src/process -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mman/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mman/src/mman -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stdlib/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stdlib/src/stdlib -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/fcntl/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/fcntl/src/fcntl -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stdio/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stdio/src/stdio -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/conf/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/conf/src/conf -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/math/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/math/src/math -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/aio/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/aio/src/aio -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stat/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stat/src/stat -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/search/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/search/src/search -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/crypt/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/crypt/src/crypt -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/select/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/select/src/select -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/malloc/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/malloc/src/malloc -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/unistd/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/unistd/src/unistd -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/signal/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/signal/src/signal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/thread/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/thread/src/thread -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/legacy/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/legacy/src/legacy -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/env/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/env/src/env -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/time/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/time/src/time -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/errno/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/errno/src/errno -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ipc/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ipc/src/ipc -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/prng/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/prng/src/prng -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ldso/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ldso/src/ldso -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/passwd/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/passwd/src/passwd -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/fenv/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/fenv/src/fenv -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ctype/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ctype/src/ctype -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/linux/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/linux/src/linux -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/internal/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/internal/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/network/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/network/src/network -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/sched/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/sched/src/sched -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/string/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/string/src/string -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/regex/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/regex/src/regex -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/termios/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/termios/src/termios -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/exit/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/exit/src/exit -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/setjmp/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/setjmp/src/setjmp -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/locale/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/locale/src/locale -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/complex/src/internal -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/complex/src/complex  -I/home/anisa/ChallengePort/apps/app-wamr/build/include -I/home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include -I/home/anisa/ChallengePort/unikraft/include  -I/home/anisa/ChallengePort/unikraft/lib/devfs/include -I/home/anisa/ChallengePort/unikraft/lib/posix-process/include -I/home/anisa/ChallengePort/unikraft/lib/posix-process/musl-imported/include -I/home/anisa/ChallengePort/unikraft/lib/posix-process/musl-imported/arch/generic -I/home/anisa/ChallengePort/unikraft/lib/posix-socket/include -I/home/anisa/ChallengePort/unikraft/lib/posix-futex/include -I/home/anisa/ChallengePort/unikraft/lib/posix-user/musl-imported/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libsyscall_shim/include -I/home/anisa/ChallengePort/unikraft/lib/syscall_shim/include -I/home/anisa/ChallengePort/unikraft/lib/ukalloc/include -I/home/anisa/ChallengePort/unikraft/lib/ukallocbbuddy/include -I/home/anisa/ChallengePort/unikraft/lib/ukargparse/include -I/home/anisa/ChallengePort/unikraft/lib/ukstreambuf/include -I/home/anisa/ChallengePort/unikraft/lib/ukboot/include -I/home/anisa/ChallengePort/unikraft/lib/ukbus/include -I/home/anisa/ChallengePort/unikraft/lib/ukcpio/include -I/home/anisa/ChallengePort/unikraft/lib/ukdebug/include -I/home/anisa/ChallengePort/unikraft/lib/uklibparam/include -I/home/anisa/ChallengePort/unikraft/lib/uklock/include -I/home/anisa/ChallengePort/unikraft/lib/ukmpi/include -I/home/anisa/ChallengePort/unikraft/lib/uknetdev/include -I/home/anisa/ChallengePort/unikraft/lib/uksched/include -I/home/anisa/ChallengePort/unikraft/lib/ukschedcoop/include -I/home/anisa/ChallengePort/unikraft/lib/uksglist/include -I/home/anisa/ChallengePort/unikraft/lib/uksp/include -I/home/anisa/ChallengePort/unikraft/lib/ukstore/include -I/home/anisa/ChallengePort/unikraft/lib/ukswrand/include  -I/home/anisa/ChallengePort/unikraft/lib/uktimeconv/include -I/home/anisa/ChallengePort/unikraft/lib/ukvmem/include -I/home/anisa/ChallengePort/unikraft/lib/vfscore/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/x86_64 -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/generic -I/home/anisa/ChallengePort/libs/lib-musl/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/core/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mq/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/dirent/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/misc/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/temp/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/multibyte/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/process/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/mman/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stdlib/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/fcntl/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stdio/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/conf/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/math/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/aio/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/stat/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/search/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/crypt/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/select/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/malloc/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/unistd/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/signal/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/thread/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/legacy/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/env/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/time/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/errno/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ipc/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/prng/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ldso/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/passwd/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/fenv/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/ctype/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/linux/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/internal/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/network/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/sched/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/string/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/regex/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/termios/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/exit/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/setjmp/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/locale/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/include/complex/include -I/home/anisa/ChallengePort/libs/lib-wamr/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libwamr/origin/wasm-micro-runtime-bc762fe9e2cf2d26a0cde42931c4b6ed79860047/core/iwasm/runtime/vmcore-wasm -I/home/anisa/ChallengePort/apps/app-wamr/build/libwamr/origin/wasm-micro-runtime-bc762fe9e2cf2d26a0cde42931c4b6ed79860047/core/iwasm/runtime/platform/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libwamr/origin/wasm-micro-runtime-bc762fe9e2cf2d26a0cde42931c4b6ed79860047/core/iwasm/runtime/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libwamr/origin/wasm-micro-runtime-bc762fe9e2cf2d26a0cde42931c4b6ed79860047/core/shared-lib/platform/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libwamr/origin/wasm-micro-runtime-bc762fe9e2cf2d26a0cde42931c4b6ed79860047/core/shared-lib/include  -I/home/anisa/ChallengePort/libs/lib-lwip/include -I/home/anisa/ChallengePort/libs/lib-lwip/musl-imported/include -I/home/anisa/ChallengePort/apps/app-wamr/build/liblwip/origin/fork-lwip-UNIKRAFT-2_1_x/src/include  -D__X86_64__ -m64 -mno-red-zone -fno-asynchronous-unwind-tables  -fno-reorder-blocks -mtune=generic  -DCC_VERSION=9.4 -Wno-unused-parameter -Wno-unused-value -Wno-parentheses -Wno-error=sign-compare -Wno-builtin-macro-redefined  -DCONFIG_UKARCH_TLS_HAVE_TCB=1 -DCONFIG_UK_NETDEV_SCRATCH_SIZE=64   -Wno-implicit-fallthrough -Wno-restrict -Wno-unused-but-set-variable -Wno-sign-compare -Wno-empty-body -Wno-maybe-uninitialized -Wno-unknown-pragmas -Wno-missing-braces -Wno-cast-function-type -Wno-format-contains-nul -Wno-type-limits -DUK_LIBC_SYSCALL=0 -D_XOPEN_SOURCE=700 -Wno-unused-parameter -Wno-unused-value -Wno-parentheses -Wno-error=sign-compare -Wno-builtin-macro-redefined     -g3 -D__LIBNAME__=libmusl -D__BASENAME__=__xstat.c -c /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//src/stat/__xstat.c -o /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/__xstat.o -Wp,-MD,/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/.__xstat.o.d
