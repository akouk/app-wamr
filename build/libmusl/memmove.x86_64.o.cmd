""gcc  -nostdlib -U __linux__ -U __FreeBSD__ -U __sun__ -fno-stack-protector -Wall -Wextra -D __Unikraft__ -DUK_CODENAME="Epimetheus" -DUK_VERSION=0.12 -DUK_FULLVERSION=0.12.0~5bd4b94d  -fno-builtin-exit -fno-builtin-exit-group -fno-tree-sra -fno-split-stack -nostdinc -O2 -fno-omit-frame-pointer -fno-PIC  -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//arch/x86_64 -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//src/include -I/home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//src/internal  -I/home/anisa/ChallengePort/apps/app-wamr/build/include -I/home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include -I/home/anisa/ChallengePort/unikraft/include  -I/home/anisa/ChallengePort/unikraft/lib/uklibparam/include      -D__X86_64__ -m64 -mno-red-zone -fno-asynchronous-unwind-tables  -fno-reorder-blocks -mtune=generic  -DCC_VERSION=9.4 -D__ASSEMBLY__         -g3 -D__LIBNAME__=libmusl -D__BASENAME__=memmove.s -D__VARIANT__=x86_64 -c /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/origin/musl-1.2.3//src/string/x86_64/memmove.s -o /home/anisa/ChallengePort/apps/app-wamr/build/libmusl/memmove.x86_64.o
