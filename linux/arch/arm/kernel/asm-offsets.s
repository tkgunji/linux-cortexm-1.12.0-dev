	.syntax unified
	.cpu cortex-m3
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 4
	.eabi_attribute 18, 4
	.file	"asm-offsets.c"
@ GNU C (Sourcery G++ Lite 2010q1-189) version 4.4.1 (arm-uclinuxeabi)
@	compiled by GNU C version 4.3.2, GMP version 4.3.1, MPFR version 2.4.2.
@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc
@ -I/rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include -Iinclude
@ -Iarch/arm/mach-m2s/include -imultilib thumb2 -iprefix
@ /rcu2/release/linux-cortexm-1.11.0/tools/arm-2010q1/bin/../lib/gcc/arm-uclinuxeabi/4.4.1/
@ -isysroot
@ /rcu2/release/linux-cortexm-1.11.0/tools/arm-2010q1/bin/../arm-uclinuxeabi/libc
@ -D__KERNEL__ -D__LINUX_ARM_ARCH__=7 -Uarm -DKBUILD_STR(s)=#s
@ -DKBUILD_BASENAME=KBUILD_STR(asm_offsets)
@ -DKBUILD_MODNAME=KBUILD_STR(asm_offsets) -isystem
@ /rcu2/release/linux-cortexm-1.11.0/tools/arm-2010q1/bin/../lib/gcc/arm-uclinuxeabi/4.4.1/include
@ -include include/generated/autoconf.h -MD
@ arch/arm/kernel/.asm-offsets.s.d arch/arm/kernel/asm-offsets.c
@ -mlittle-endian -marm -mabi=aapcs-linux -mno-thumb-interwork -mthumb
@ -mcpu=cortex-m3 -msoft-float -auxbase-strip arch/arm/kernel/asm-offsets.s
@ -Os -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs
@ -Werror-implicit-function-declaration -Wno-format-security
@ -Wframe-larger-than=1024 -Wdeclaration-after-statement -Wno-pointer-sign
@ -fno-strict-aliasing -fno-common -fno-delete-null-pointer-checks
@ -fno-stack-protector -fomit-frame-pointer -fno-strict-overflow
@ -fno-dwarf2-cfi-asm -fconserve-stack -fverbose-asm
@ options enabled:  -falign-loops -fargument-alias -fauto-inc-dec
@ -fbranch-count-reg -fcaller-saves -fcprop-registers -fcrossjumping
@ -fcse-follow-jumps -fdefer-pop -fearly-inlining
@ -feliminate-unused-debug-types -fexpensive-optimizations
@ -fforward-propagate -ffunction-cse -fgcse -fgcse-lm
@ -fguess-branch-probability -fident -fif-conversion -fif-conversion2
@ -findirect-inlining -finline -finline-functions
@ -finline-functions-called-once -finline-small-functions -fipa-cp
@ -fipa-pure-const -fipa-reference -fira-share-save-slots
@ -fira-share-spill-slots -fivopts -fkeep-static-consts
@ -fleading-underscore -fmath-errno -fmerge-constants -fmerge-debug-strings
@ -fomit-frame-pointer -foptimize-register-move -foptimize-sibling-calls
@ -fpeephole -fpeephole2 -freg-struct-return -fregmove -freorder-blocks
@ -freorder-functions -frerun-cse-after-loop -fsched-interblock
@ -fsched-spec -fsched-stalled-insns-dep -fschedule-insns2
@ -fsection-anchors -fsigned-zeros -fsplit-ivs-in-unroller
@ -fsplit-wide-types -fthread-jumps -ftoplevel-reorder -ftrapping-math
@ -ftree-builtin-call-dce -ftree-ccp -ftree-ch -ftree-copy-prop
@ -ftree-copyrename -ftree-cselim -ftree-dce -ftree-dominator-opts
@ -ftree-dse -ftree-fre -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-reassoc
@ -ftree-scev-cprop -ftree-sink -ftree-sra -ftree-switch-conversion
@ -ftree-ter -ftree-vect-loop-version -ftree-vrp -funit-at-a-time
@ -fverbose-asm -fzero-initialized-in-bss -mfix-cortex-m3-ldrd
@ -mlittle-endian -msched-prolog -msingle-pic-base -mthumb
@ -mword-relocations

@ Compiler executable checksum: d3466fa849c069e21e7d73ccbc8f64f7

	.text
	.align	1
	.global	main
	.thumb
	.thumb_func
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ 42 "arch/arm/kernel/asm-offsets.c" 1
	
->TSK_ACTIVE_MM #220 offsetof(struct task_struct, active_mm)	@
@ 0 "" 2
@ 43 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 44 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_FLAGS #0 offsetof(struct thread_info, flags)	@
@ 0 "" 2
@ 45 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)	@
@ 0 "" 2
@ 46 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_ADDR_LIMIT #8 offsetof(struct thread_info, addr_limit)	@
@ 0 "" 2
@ 47 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_TASK #12 offsetof(struct thread_info, task)	@
@ 0 "" 2
@ 48 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_EXEC_DOMAIN #16 offsetof(struct thread_info, exec_domain)	@
@ 0 "" 2
@ 49 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU #20 offsetof(struct thread_info, cpu)	@
@ 0 "" 2
@ 50 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU_DOMAIN #24 offsetof(struct thread_info, cpu_domain)	@
@ 0 "" 2
@ 51 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU_SAVE #28 offsetof(struct thread_info, cpu_context)	@
@ 0 "" 2
@ 52 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_USED_CP #80 offsetof(struct thread_info, used_cp)	@
@ 0 "" 2
@ 53 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_TP_VALUE #96 offsetof(struct thread_info, tp_value)	@
@ 0 "" 2
@ 54 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_FPSTATE #288 offsetof(struct thread_info, fpstate)	@
@ 0 "" 2
@ 55 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_VFPSTATE #432 offsetof(struct thread_info, vfpstate)	@
@ 0 "" 2
@ 57 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_VFPSTATE_CLEAN #576 offsetof(struct thread_info, vfpstate.hard.clean)	@
@ 0 "" 2
@ 68 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 69 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R0 #40 offsetof(struct pt_regs, ARM_r0)	@
@ 0 "" 2
@ 70 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R1 #44 offsetof(struct pt_regs, ARM_r1)	@
@ 0 "" 2
@ 71 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R2 #48 offsetof(struct pt_regs, ARM_r2)	@
@ 0 "" 2
@ 72 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R3 #52 offsetof(struct pt_regs, ARM_r3)	@
@ 0 "" 2
@ 73 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R4 #0 offsetof(struct pt_regs, ARM_r4)	@
@ 0 "" 2
@ 74 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R5 #4 offsetof(struct pt_regs, ARM_r5)	@
@ 0 "" 2
@ 75 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R6 #8 offsetof(struct pt_regs, ARM_r6)	@
@ 0 "" 2
@ 76 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R7 #12 offsetof(struct pt_regs, ARM_r7)	@
@ 0 "" 2
@ 77 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R8 #16 offsetof(struct pt_regs, ARM_r8)	@
@ 0 "" 2
@ 78 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R9 #20 offsetof(struct pt_regs, ARM_r9)	@
@ 0 "" 2
@ 79 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R10 #24 offsetof(struct pt_regs, ARM_r10)	@
@ 0 "" 2
@ 80 "arch/arm/kernel/asm-offsets.c" 1
	
->S_FP #28 offsetof(struct pt_regs, ARM_fp)	@
@ 0 "" 2
@ 81 "arch/arm/kernel/asm-offsets.c" 1
	
->S_IP #56 offsetof(struct pt_regs, ARM_ip)	@
@ 0 "" 2
@ 82 "arch/arm/kernel/asm-offsets.c" 1
	
->S_SP #32 offsetof(struct pt_regs, ARM_sp)	@
@ 0 "" 2
@ 83 "arch/arm/kernel/asm-offsets.c" 1
	
->S_LR #60 offsetof(struct pt_regs, ARM_lr)	@
@ 0 "" 2
@ 84 "arch/arm/kernel/asm-offsets.c" 1
	
->S_PC #64 offsetof(struct pt_regs, ARM_pc)	@
@ 0 "" 2
@ 85 "arch/arm/kernel/asm-offsets.c" 1
	
->S_PSR #68 offsetof(struct pt_regs, ARM_cpsr)	@
@ 0 "" 2
@ 86 "arch/arm/kernel/asm-offsets.c" 1
	
->S_OLD_R0 #72 offsetof(struct pt_regs, ARM_ORIG_r0)	@
@ 0 "" 2
@ 88 "arch/arm/kernel/asm-offsets.c" 1
	
->S_EXC_LR #36 offsetof(struct pt_regs, ARM_EXC_lr)	@
@ 0 "" 2
@ 90 "arch/arm/kernel/asm-offsets.c" 1
	
->S_FRAME_SIZE #80 sizeof(struct pt_regs)	@
@ 0 "" 2
@ 91 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 96 "arch/arm/kernel/asm-offsets.c" 1
	
->VMA_VM_MM #0 offsetof(struct vm_area_struct, vm_mm)	@
@ 0 "" 2
@ 97 "arch/arm/kernel/asm-offsets.c" 1
	
->VMA_VM_FLAGS #20 offsetof(struct vm_area_struct, vm_flags)	@
@ 0 "" 2
@ 98 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 99 "arch/arm/kernel/asm-offsets.c" 1
	
->VM_EXEC #4 VM_EXEC	@
@ 0 "" 2
@ 100 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 101 "arch/arm/kernel/asm-offsets.c" 1
	
->PAGE_SZ #4096 PAGE_SIZE	@
@ 0 "" 2
@ 102 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 103 "arch/arm/kernel/asm-offsets.c" 1
	
->SYS_ERROR0 #10420224 0x9f0000	@
@ 0 "" 2
@ 104 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 105 "arch/arm/kernel/asm-offsets.c" 1
	
->SIZEOF_MACHINE_DESC #52 sizeof(struct machine_desc)	@
@ 0 "" 2
@ 106 "arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_TYPE #0 offsetof(struct machine_desc, nr)	@
@ 0 "" 2
@ 107 "arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_NAME #12 offsetof(struct machine_desc, name)	@
@ 0 "" 2
@ 108 "arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_PHYSIO #4 offsetof(struct machine_desc, phys_io)	@
@ 0 "" 2
@ 109 "arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_PGOFFIO #8 offsetof(struct machine_desc, io_pg_offst)	@
@ 0 "" 2
@ 110 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 111 "arch/arm/kernel/asm-offsets.c" 1
	
->PROC_INFO_SZ #52 sizeof(struct proc_info_list)	@
@ 0 "" 2
@ 112 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_INITFUNC #16 offsetof(struct proc_info_list, __cpu_flush)	@
@ 0 "" 2
@ 113 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_MM_MMUFLAGS #8 offsetof(struct proc_info_list, __cpu_mm_mmu_flags)	@
@ 0 "" 2
@ 114 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_IO_MMUFLAGS #12 offsetof(struct proc_info_list, __cpu_io_mmu_flags)	@
@ 0 "" 2
@ 115 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 122 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 123 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_BIDIRECTIONAL #0 DMA_BIDIRECTIONAL	@
@ 0 "" 2
@ 124 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_TO_DEVICE #1 DMA_TO_DEVICE	@
@ 0 "" 2
@ 125 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_FROM_DEVICE #2 DMA_FROM_DEVICE	@
@ 0 "" 2
	.thumb
	movs	r0, #0	@,
	bx	lr	@
	.size	main, .-main
	.ident	"GCC: (Sourcery G++ Lite 2010q1-189) 4.4.1"
