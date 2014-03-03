cmd_arch/arm/kernel/head-nommu.o := arm-uclinuxeabi-gcc -Wp,-MD,arch/arm/kernel/.head-nommu.o.d  -nostdinc -isystem /rcu2/release/linux-cortexm-1.11.0/tools/arm-2010q1/bin/../lib/gcc/arm-uclinuxeabi/4.4.1/include -I/rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-m2s/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -Wa,-mthumb -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-m3 -Wa,-mcpu=cortex-m3  -include asm/unified.h -msoft-float       -c -o arch/arm/kernel/head-nommu.o arch/arm/kernel/head-nommu.S

deps_arch/arm/kernel/head-nommu.o := \
  arch/arm/kernel/head-nommu.S \
    $(wildcard include/config/cpu/cp15.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/processor/id.h) \
    $(wildcard include/config/alignment/trap.h) \
    $(wildcard include/config/cpu/dcache/disable.h) \
    $(wildcard include/config/cpu/bpredict/disable.h) \
    $(wildcard include/config/cpu/icache/disable.h) \
    $(wildcard include/config/cpu/high/vector.h) \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/linkage.h \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/hwcap.h \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/arm/thumbee.h) \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/vfpm.h) \
    $(wildcard include/config/iwmmxt.h) \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/system.h \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/arch/a2f.h) \
    $(wildcard include/config/cpu/32v6k.h) \
  arch/arm/kernel/head-common.S \
    $(wildcard include/config/arch/m2s.h) \
    $(wildcard include/config/m2s/cache.h) \
    $(wildcard include/config/debug/ll.h) \
    $(wildcard include/config/arch/rpc.h) \

arch/arm/kernel/head-nommu.o: $(deps_arch/arm/kernel/head-nommu.o)

$(deps_arch/arm/kernel/head-nommu.o):
