cmd_arch/arm/boot/Image := arm-uclinuxeabi-objcopy -O binary -R .note -R .note.gnu.build-id -R .comment -S --change-section-lma .cached+0x90000000  vmlinux arch/arm/boot/Image
