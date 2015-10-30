Core Development
==

## Embedded
### Linux Kernel Introduction

> Objective: Understand the Linux Kernel compilation process and built system
> Proficiency Level: Basic

#### Linux Kernel Compilation

    root@workstation:~# apt-get update
    root@workstation:~# apt-get upgrade
    root@workstation:~# apt-get install linux-headers-$(uname -r) kernel-package libncurses5 libncurses5-dev git
    user@workstation:~$ git clone https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git
    user@workstation:~$ uname -a
    Linux Minnowboard 3.2.0-4-amd64 #1 SMP Debian 3.2.63-2+deb7u2 x86_64 GNU/Linux
    user@workstation:~$ cd linux
    user@workstation:~$ make oldconfig
    <You will be asked configuration questions not answered, hit Enter for all of them>
    user@workstation:~$ make
    root@workstation:~# make modules_install
    root@workstation:~# make install

Reboot your workstation and confirm the new version has been installed

    user@workstation:~$ uname -a
    Linux Minnowboard 3.19.0-rc7+ #1 SMP Debian ... x86_64 GNU/Linux

#### Linux Kernel Build System Overview

Please read the "Kbuild: the Linux Kernel Build System" carefully, you will understand how this system works
[Kbuild Linux Kernel Build System](http://www.linuxjournal.com/content/kbuild-linux-kernel-build-system)

Do you want to do another Linux Kernel Build System exercise by writing a Hello World Kernel Module? then keep reading...

##### Linux Kernel Build System, Hello World Module

Make a "helloworld" directory under drivers

    user@workstation:~$ mkdir drivers/helloworld

Create helloworld.c file under our helloworld directory and add the C code below, this is a simple Hello World Kernel Module

    user@workstation:~$ nano drivers/helloworld/helloworld.c

```
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int module_init_function(void)
{
	printk(KERN_INFO "Module? Hello!\n");
	return 0;
}

static void module_exit_function(void)
{
	printk(KERN_INFO "Module? Bye!\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Module");

module_init(module_init_function);
module_exit(module_exit_function);
```

[[ Linux Kernel Build System, Hello World Kconfig ]]


Create the Kconfig file under helloworld directory and add the code below, make sure indentation is correct

    user@workstation:~$ nano drivers/helloworld/Kconfig

    menu "Hello Module Kernel Support"
    
    config HELLO_WORLD
            tristate "Hello Module Driver"
            depends on X86
            help
              Select this option to run a Hello World Module!
    endmenu


[[ Linux Kernel Build System, Hello World Makefile ]]


Create the Makefile under helloworld directory and add the code below

    user@workstation:~$ nano drivers/helloworld/Makefile
    obj-$(CONFIG_HELLO_WORLD)               += helloworld.o


[[ Linux Kernel Build System, Device Drivers Kconfig seeing Hello World Directory ]]


Modify Kconfig under drivers directory and add the line with helloworld

    user@workstation:~$ nano drivers/Kconfig
    menu "Device Drivers"
    source "drivers/helloworld/Kconfig"
    source "drivers/amba/Kconfig"

[[ Linux Kernel Build System, Device Drivers Makefile compiling Hello World Directory ]]

Modify Makefile under drivers directory and add the line with CONFIG_HELLO_WORLD
user@workstation:~$ nano drivers/Makefile

    ...
    # Rewritten to use lists instead of if-statements.
    #
    obj-$(CONFIG_HELLO_WORLD) += helloworld/
    obj-y += irqchip/
    ...


[[ Linux Kernel Build System, Hello World Menuconfig ]]

We are ready to view our Hello World Module under menuconfig
    
    user@workstation:~$ make menuconfig

Go to its location under
    -> Device Drivers
      -> Hello Module Kernel Support

Understand the menu options seen below including their fast paths (one letter invocation)

    <Select>    < Exit >    < Help >    < Save >    < Load >

Get help for the Hello Module Kernel Support using Help function, you should see this

    CONFIG_HELLO_WORLD:
    Select this option to run a Hello World Module!
    Symbol: HELLO_WORLD [=n]
    Type : tristate
    Prompt: Hello Module Driver
       Location:
         -> Device Drivers
           -> Hello Module Kernel Support
       Defined at drivers/helloworld/Kconfig:3
       Depends on: X86 [=y]

Understand about the following options from Kconfig by googling or looking
at other Kconfigs

- default
- tristate
- Depends on

Take a look at the default building state for our Hello World Module and
modify Kconfig so you can have it built as default

     Symbol: HELLO_WORLD [=n]


[[ Linux Kernel Build System, Hello World Compilation ]]


Now compile your Hello World Module both as module and built-in into the
Kernel image making sure you boot your system twice to confirm your
changes using dmesg command

As Module (M)

    user@workstation:~$ make
      CHK     include/config/kernel.release
      CHK     include/generated/uapi/linux/version.h
      CHK     include/generated/utsrelease.h
      CALL    scripts/checksyscalls.sh
      CHK     include/generated/compile.h
      LD      drivers/helloworld/built-in.o
      CC [M]  drivers/helloworld/helloworld.o
    Kernel: arch/x86/boot/bzImage is ready  (#2)
      Building modules, stage 2.
      MODPOST 2255 modules
      CC      drivers/helloworld/helloworld.mod.o
      LD [M]  drivers/helloworld/helloworld.ko
    root@workstation:~# make modules_install
    root@workstation:~# make install
    root@workstation:~# shutdown -r now
    <reboot>
    root@workstation:~# modprobe helloworld
    root@workstation:~# dmesg
 
Built-In (*)

    user@workstation:~$ make
    xe1gyq@Minnowboard:~/linux$ make                                                                                                               
    scripts/kconfig/conf --silentoldconfig Kconfig
      CHK     include/config/kernel.release                    
      CHK     include/generated/uapi/linux/version.h                    
      CHK     include/generated/utsrelease.h            
      CALL    scripts/checksyscalls.sh                    
      CHK     include/generated/compile.h                    
      CC      drivers/helloworld/helloworld.o                    
      LD      drivers/helloworld/built-in.o                    
      LD      drivers/built-in.o                    
      LINK    vmlinux                    
      LD      vmlinux.o                    
      MODPOST vmlinux.o                    
      GEN     .version                    
      CHK     include/generated/compile.h                    
      UPD     include/generated/compile.h
      CC      init/version.o                    
      LD      init/built-in.o                    
      KSYM    .tmp_kallsyms1.o                    
      KSYM    .tmp_kallsyms2.o                    
      LD      vmlinux
      SORTEX  vmlinux
      SYSMAP  System.map
      VOFFSET arch/x86/boot/voffset.h
      OBJCOPY arch/x86/boot/compressed/vmlinux.bin
      GZIP    arch/x86/boot/compressed/vmlinux.bin.gz
      MKPIGGY arch/x86/boot/compressed/piggy.S
      AS      arch/x86/boot/compressed/piggy.o
      LD      arch/x86/boot/compressed/vmlinux
      ZOFFSET arch/x86/boot/zoffset.h
      AS      arch/x86/boot/header.o
      CC      arch/x86/boot/version.o
      LD      arch/x86/boot/setup.elf
      OBJCOPY arch/x86/boot/setup.bin
      OBJCOPY arch/x86/boot/vmlinux.bin
      BUILD   arch/x86/boot/bzImage
    Setup is 17516 bytes (padded to 17920 bytes).
    System is 4046 kB
    CRC 113cf27d
    Kernel: arch/x86/boot/bzImage is ready  (#3)
      Building modules, stage 2.
      MODPOST 2254 modules
    root@workstation:~# make modules_install
    root@workstation:~# make install
    root@workstation:~# shutdown -r now
    <reboot>
    user@workstation:~$ dmesg

============================================================================

## Embedded
### Embedded Systems Programming

> Objective: Learn various fundamentals issues as well as practical development skill in the area of embedded systems programming.
    
> Proficiency Level: Basic

Want to start learning! Feel free to code if possible! 2 Weeks Training (20 minute/lecture, 4 lectures/day)

[Summer Short Course on Embedded Systems Programming](http://rts.lab.asu.edu/web_ESP_Summer2014/ESP_Main_page.htm)
