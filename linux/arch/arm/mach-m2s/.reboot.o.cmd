cmd_arch/arm/mach-m2s/reboot.o := arm-uclinuxeabi-gcc -Wp,-MD,arch/arm/mach-m2s/.reboot.o.d  -nostdinc -isystem /rcu2/release/linux-cortexm-1.11.0/tools/arm-2010q1/bin/../lib/gcc/arm-uclinuxeabi/4.4.1/include -I/rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-m2s/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -mabi=aapcs-linux -mno-thumb-interwork -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-m3 -Wa,-mcpu=cortex-m3 -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-dwarf2-cfi-asm -fconserve-stack   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(reboot)"  -D"KBUILD_MODNAME=KBUILD_STR(reboot)"  -c -o arch/arm/mach-m2s/reboot.o arch/arm/mach-m2s/reboot.c

deps_arch/arm/mach-m2s/reboot.o := \
  arch/arm/mach-m2s/reboot.c \
  /rcu2/firmware/linux-cortexm-1.12.0/linux/arch/arm/include/asm/hardware/cortexm3.h \
    $(wildcard include/config/arm/cortexm3.h) \
    $(wildcard include/config/arch/kinetis.h) \
    $(wildcard include/config/arch/stm32.h) \
    $(wildcard include/config/arch/lpc178x.h) \
    $(wildcard include/config/arch/lpc18xx.h) \
    $(wildcard include/config/arch/xxx.h) \

arch/arm/mach-m2s/reboot.o: $(deps_arch/arm/mach-m2s/reboot.o)

$(deps_arch/arm/mach-m2s/reboot.o):
