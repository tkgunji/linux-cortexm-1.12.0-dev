cmd_arch/arm/kernel/entry-v7m.o := arm-uclinuxeabi-gcc -Wp,-MD,arch/arm/kernel/.entry-v7m.o.d  -nostdinc -isystem /rcu2/release/linux-cortexm-1.11.0/tools/arm-2010q1/bin/../lib/gcc/arm-uclinuxeabi/4.4.1/include -I/rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-m2s/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -Wa,-mthumb -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-m3 -Wa,-mcpu=cortex-m3  -include asm/unified.h -msoft-float       -c -o arch/arm/kernel/entry-v7m.o arch/arm/kernel/entry-v7m.S

deps_arch/arm/kernel/entry-v7m.o := \
  arch/arm/kernel/entry-v7m.S \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/mpu.h) \
    $(wildcard include/config/arm/cortexm3.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/memory.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/discontigmem.h) \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/const.h \
  arch/arm/mach-m2s/include/mach/memory.h \
    $(wildcard include/config/m2s/cache.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/glue.h \
    $(wildcard include/config/cpu/arm610.h) \
    $(wildcard include/config/cpu/arm710.h) \
    $(wildcard include/config/cpu/abrt/lv4t.h) \
    $(wildcard include/config/cpu/abrt/ev4.h) \
    $(wildcard include/config/cpu/abrt/ev4t.h) \
    $(wildcard include/config/cpu/abrt/ev5tj.h) \
    $(wildcard include/config/cpu/abrt/ev5t.h) \
    $(wildcard include/config/cpu/abrt/ev6.h) \
    $(wildcard include/config/cpu/abrt/ev7.h) \
    $(wildcard include/config/cpu/abrt/nommu.h) \
    $(wildcard include/config/cpu/pabrt/legacy.h) \
    $(wildcard include/config/cpu/pabrt/v6.h) \
    $(wildcard include/config/cpu/pabrt/v7.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/thread_notify.h \
  arch/arm/mach-m2s/include/mach/irqs.h \
  arch/arm/mach-m2s/include/mach/entry-macro.S \
  arch/arm/kernel/entry-header.S \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/frame/pointer.h) \
    $(wildcard include/config/alignment/trap.h) \
    $(wildcard include/config/vfpm.h) \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/v6.h) \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/linkage.h \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/linkage.h \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/smp.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/hwcap.h \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/arm/thumbee.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \

arch/arm/kernel/entry-v7m.o: $(deps_arch/arm/kernel/entry-v7m.o)

$(deps_arch/arm/kernel/entry-v7m.o):
