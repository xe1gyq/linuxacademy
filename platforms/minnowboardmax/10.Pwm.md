# Pulse Width Modulation

## PWM, Drivers Enablement

Enable all PWM needed drivers via menuconfig and compile your Kernel

    user@Minnowboard:~$ cd linux
    user@Minnowboard:~$ make menuconfig

    @Linux Kernel Menuconfig > Device Drivers
    Symbol: PWM [=y]
    Prompt: Generic Pulse-Width Modulation (PWM) support

    @Linux Kernel Menuconfig > Device Drivers > Pulse-Width Modulation (PWM) Support
    Symbol: PWM_LPSS [=m]
    Prompt: Intel LPSS PWM support

    @Linux Kernel Menuconfig > Device Drivers > Pulse-Width Modulation (PWM) Support
    Symbol: PWM_LPSS_PCI [=m]
    Prompt: Intel LPSS PWM PCI driver

    @Linux Kernel Menuconfig > Device Drivers > Pulse-Width Modulation (PWM) Support
    Symbol: PWM_LPSS_PLATFORM [=m]
    Prompt: Intel LPSS PWM platform driver

    CC      drivers/pwm/core.o
    CC      drivers/pwm/sysfs.o
    LD      drivers/pwm/built-in.o
    CC [M]  drivers/pwm/pwm-lpss.o
    CC [M]  drivers/pwm/pwm-lpss-pci.o
    CC [M]  drivers/pwm/pwm-lpss-platform.o
    LD      drivers/built-in.o

    Building modules, stage 2.
    MODPOST 3027 modules
    CC      drivers/pwm/pwm-lpss-pci.mod.o
    LD [M]  drivers/pwm/pwm-lpss-pci.ko
    CC      drivers/pwm/pwm-lpss-platform.mod.o
    LD [M]  drivers/pwm/pwm-lpss-platform.ko
    CC      drivers/pwm/pwm-lpss.mod.o
    LD [M]  drivers/pwm/pwm-lpss.ko

## PWM, UserSpace Usage, SysFs

    root@minnowboard:# ls /sys/class/pwm/
    pwmchip0  pwmchip1
    root@minnowboard:# ls /sys/class/pwm/pwmchip0
    device	export	npwm  power  subsystem	uevent	unexport
    root@minnowboard:# echo 0 > /sys/class/pwm/pwmchip0/export
    root@minnowboard:# ls /sys/class/pwm/pwmchip0
    device	export	npwm  power  pwm0  subsystem  uevent  unexport
    root@minnowboard:# ls /sys/class/pwm/pwmchip0/pwm0/
    duty_cycle  enable  period  polarity  power  uevent
    root@minnowboard:# cat /sys/class/pwm/pwmchip0/pwm0/enable
    root@minnowboard:# echo 1 > /sys/class/pwm/pwmchip0/pwm0/enable
    root@minnowboard:# echo 100 > /sys/class/pwm/pwmchip0/pwm0/period
    root@minnowboard:# echo 50 > /sys/class/pwm/pwmchip0/pwm0/duty_cycle
    root@minnowboard:# cat /sys/class/pwm/pwmchip0/pwm0/enable
    root@minnowboard:# cat /sys/class/pwm/pwmchip0/pwm0/period
    root@minnowboard:# cat /sys/class/pwm/pwmchip0/pwm0/duty_cycle

# End of File


