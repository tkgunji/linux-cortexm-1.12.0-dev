cmd_arch/arm/lib/ashrdi3.o := arm-uclinuxeabi-gcc -Wp,-MD,arch/arm/lib/.ashrdi3.o.d  -nostdinc -isystem /rcu2/release/linux-cortexm-1.11.0/tools/arm-2010q1/bin/../lib/gcc/arm-uclinuxeabi/4.4.1/include -I/rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-m2s/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -Wa,-mthumb -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-m3 -Wa,-mcpu=cortex-m3  -include asm/unified.h -msoft-float       -c -o arch/arm/lib/ashrdi3.o arch/arm/lib/ashrdi3.S

deps_arch/arm/lib/ashrdi3.o := \
  arch/arm/lib/ashrdi3.S \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /rcu2/linux-cortexm-1.12.0-dev/linux/arch/arm/include/asm/linkage.h \

arch/arm/lib/ashrdi3.o: $(deps_arch/arm/lib/ashrdi3.o)

$(deps_arch/arm/lib/ashrdi3.o):
