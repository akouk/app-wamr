awk -F '-' -f /home/anisa/ChallengePort/unikraft/lib/syscall_shim/gen_syscall_static.awk /home/anisa/ChallengePort/apps/app-wamr/build/libsyscall_shim/provided_syscalls.h.in > /home/anisa/ChallengePort/apps/app-wamr/build/libsyscall_shim/include/uk/bits/syscall_static.h
