""gcc  -nostdlib -U __linux__ -U __FreeBSD__ -U __sun__ -fno-stack-protector -Wall -Wextra -D __Unikraft__ -DUK_CODENAME="Epimetheus" -DUK_VERSION=0.12 -DUK_FULLVERSION=0.12.0~5bd4b94d  -fno-builtin-exit -fno-builtin-exit-group -fno-tree-sra -fno-split-stack -nostdinc -O2 -fno-omit-frame-pointer -fno-PIC    -I/home/anisa/ChallengePort/apps/app-wamr/build/include -I/home/anisa/ChallengePort/unikraft/arch/x86/x86_64/include -I/home/anisa/ChallengePort/unikraft/include  -I/home/anisa/ChallengePort/unikraft/lib/uklibparam/include  -I/home/anisa/ChallengePort/unikraft/plat/kvm/include -I/home/anisa/ChallengePort/unikraft/plat/common/include    -D__X86_64__ -m64 -mno-red-zone -fno-asynchronous-unwind-tables  -fno-reorder-blocks -mtune=generic  -DCC_VERSION=9.4 -D__ASSEMBLY__   -DKVMPLAT      -g3 -D__LIBNAME__=libkvmplat -D__BASENAME__=pagetable64.S -c /home/anisa/ChallengePort/unikraft/plat/kvm/x86/pagetable64.S -o /home/anisa/ChallengePort/apps/app-wamr/build/libkvmplat/pagetable64.o -Wp,-MD,/home/anisa/ChallengePort/apps/app-wamr/build/libkvmplat/.pagetable64.o.d
