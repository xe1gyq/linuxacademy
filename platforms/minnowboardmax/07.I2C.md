# I2C

## I2C, Kernel Drivers

    user@Minnowboard:~$ dmesg | grep -i i2c

    ** @ Linux Kernel Menuconfig > Device Driver > I2C Support **
    Symbol: CONFIG_I2C [=y]
    Prompt: I2C support

    ** @ Linux Kernel Menuconfig > Device Driver > I2C Support **
    Symbol: CONFIG_I2C_BOARDINFO [=n]
    <M>   ...

    ** @ Linux Kernel Menuconfig > Device Driver > I2C Support **
    Symbol: CONFIG_I2C_HELPER_AUTO [=y]
    <M>   ...

    ** @ Linux Kernel Menuconfig > Device Driver > I2C Support **
    Symbol: CONFIG_I2C_ALGOBIT [=y]
    Prompt: 

    ** @ Linux Kernel Menuconfig > Device Driver > I2C Support **
    Symbol: CONFIG_I2C_CHARDEV [=y]
    Prompt: I2C device interface

    ** @ Linux Kernel Menuconfig > Device Driver > I2C **
    Symbol: CONFIG_DESIGNWARE_CORE [=m]
    <M>   ...

    ** @ Linux Kernel Menuconfig > Device Driver > I2C **
    Symbol: CONFIG_I2C_DESIGNWARE_PCI [=m]
    <M>   ...

    ** @ Linux Kernel Menuconfig > Device Driver > I2C **
    Symbol: CONFIG_I2C_DESIGNWARE_PLATFORM [=m]
    <M>   ...

## I2C, Modules Installation

    root@minnowboard:~# apt-get install i2c-tools lm-sensors
    root@Minnowboard:~# modprobe i2c-dev
    root@Minnowboard:~# cat /sys/class/i2c-dev/
    i2c-0  i2c-1  i2c-2  i2c-3  i2c-4  i2c-5  i2c-6  i2c-7  i2c-8
    root@minnowboard:~# i2cdetect -y -r 0
         0  1  2  3  4  5  6  7  8  9  a  b  c  d  e  f
    00:          -- -- -- -- -- -- -- -- -- -- -- -- -- 
    10: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
    20: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
    30: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
    40: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
    50: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
    60: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
    70: -- -- -- -- -- -- -- --

# End of File
