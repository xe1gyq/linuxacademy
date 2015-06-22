# Linux Learning Training

## Core Development
### Tools
#### GIT

> Objective: Develop your Git skills using github infrastructure
> Proficiency Level: Medium

If you want to master your Git skills at a super level then read Pro Git Book available at

[Git book](http://git-scm.com/book/en/v2)

Make sure you have git installed in your Linux box
- On /etc/apt/sources.list append:


     deb http://ftp.debian.org/debian/ squeeze main contrib non-free

In your same Linux Box, let's update, upgrade and install git

     root # apt-get update
     root # apt-get upgrade
     root # apt-get install git git-email

Configure your name and email under Git:

    $ git config --global user.name "YourName YourLastName"
    $ git config --global user.email "your.email.address@wherever.com"

Now, go to github.com and sign up for an account
 [Github](www.github.com)

Understand the following steps:

* [Fork a Repo](https://help.github.com/articles/fork-a-repo/)
* [Syncing A Repo](https://help.github.com/articles/syncing-a-fork/)
* [Pushing to a Remote](https://help.github.com/articles/pushing-to-a-remote/)
* [Using Pull Requests](https://help.github.com/articles/using-pull-requests/)

In order to work with our **Linux Learning Workshop** Use 
[xe1gyq/linuxlearning](https://github.com/xe1gyq/linuxlearning)
instead of the example
[octocat/Spoon-Knife](https://github.com/octocat/Spoon-Knife)
so you can make a fork, sync, push and ask for a pull request.

The following section shows all the steps described in the links above plus the way to commit your first changes to **Linux Learning Workshop**, you are strongly required to read through all the links where apply to really understand what we are doing in our terminal. 

##### Fork a Repo

In your web browser with a Github account previously created go to [xe1gyq/linuxlearning](https://github.com/xe1gyq/linuxlearning) and on the top-right corner of the page, click **Fork**

On command line in your Linux box type the commands below and look at the output

    user $ git clone https://github.com/YOUR_GITHUB_USERNAME/linuxlearning
    user $ cd linuxlearning
    user $ git remote -v
    user $ git remote add upstream https://github.com/xe1gyq/linuxlearning.git
    user $ git remote -v

##### Syncing a Fork

In the same linuxlearning cloned directory
 
    user $ git fetch upstream
    user $ git merge upstream/master

##### Code and Commit

This first part creates both the directories needed and the c file
 
    user $ mkdir -p training/users/<yourgithubusername>/01.core
    user $ cd training/users/<yourhithubusername>/01.core
    user $ nano c01.c

```
     #include <stdio.h>
     
     int main()
     {
     	printf("Hello World\n");
     	return 0;
     }

     /* End of File */
```

This second part is the one you'll use everytime you modify a file. Now let's tell git we want to add a new file or include new changes into its database. When we commit our changes

    First line: Title starting with your githubusername, 50 chars max
    Second line: A blank line
    Third line: Description of the changes, as many lines as required, 80 chars max per line
    
    user $ git add c01.c
    user $ git commit -s
    githubusername: My first C Programming Example
    <empty line>
    My first example of a code in C language

##### Pushing to a remote

Push your local branch to your remote repository
    user $ git push origin master

##### Using Pull Requests

This is a process entirely done at Github webpage, please follow the instructions found under the link above. So remember every time you'll work in your local repository you'll need to follow the next steps:

1. Syncing a Fork
2. Code and Commit
3. Pushing to a Remote
4. Using Pull Requests

You are now ready to go! Remember you will be pushing all your work to **xe1gyq/linuxlearning**

## Core Development
### Programming Languages
#### C

> Objetive: Have solid C programming skills required to be a Linux developer
> Proficiency Level: Intermediate

Read "The C Programming Language" by Brian W. Kernighan and Dennis M. Ritchie

**[Hands On]** Write and compile your exercises in your Linux Box and add them to this repository under your **<username>/01.core/cXX.c**, the more exercises you write the more familiar you get with C programming language. You will be a exemplary C Developer if you complete the last exercise of every chapter from "The C Programming Language"

## Core Development
### Programming Languages
#### Shell Scripting

> Objective: Shell scripting is a basic skill every Linux developer has
> Proficiency Level: Advanced

We require a script to do some "processing" for every kernel released, make it work first then optimize it.

We need the following working directory structure

    ...
    |- 01.core
      |- shelllearning
        |- kernelimages  (directory)
        |- preworkspace  (directory)
        |- postworksapce (directory)
        |- script.sh (our script)
        |- stats.pre (text file)
        |- stats.post (text file)
        |- intel.contributors (text file)

##### Script Arguments

The script will receive 3 arguments: the file location, version of the kernel and the file type

    user $ myscript.sh <internet/local> <x.x.xx> <xz|gz>

If file location is the internet then use this repository to grab the kernel tar file **https://www.kernel.org/pub/linux/kernel/v3.x/** and download it to kernelimages directory

If file location is local then use kernelimages directory to grab the kernel tar file

##### Processing

We will gather statistics and do some work in 2 phases, right after we have decompressed the kernel file under the preworkspace directory and after we make some changes to its directory structure under postworkspace, statistics will be populated in 2 different files under our top working directory, their names will be:

1. stats.pre
2. stats.post

##### Pre Processing

Take kernel image from kernelimages directory and decompress under the preworkspace directory. We will require the following information under **stats.pre** files:

File Names

    # of README* (files as README.Locking also count)
    # of Kconfig
    # of Kbuild
    # of Makefiles
    # of .c files
    # of .h files
    # of .pl files
    # of others files
    Total number of files

File Content

    # of ocurrences for Linus
    # of directories found under arch/
    # of ocurrences for kernel_start
    # of ocurrences for __init
    # of files in its filename containing the word gpio
    # of ocurrences for #include <linux/module.h>

Some Tasks To Do

Sort in alphabetical order all the inclusion of libraries using this format **#include <linux/*>** only under **drivers/i2c/** directory, please make sure you identify all files you have modified, you will need their identity in the post processing phase

Let's populate our file called **intel.contributors** under our top level working directory directory, search for all Intel contributors matching **@intel.com** and identify the file where their name was located, then write one line per contributor, cannot be repeated e.g.

    Path/to/file.c | Sara Sharp
    Path/to/file.c | Darren Hart

##### Post Processing

Create 3 directories under postworkspace and move all files from preworkspace where kernel was decompressed according to the file extensions:

    files_c, all .c files
    files_h, all .h files
    files_others, all other files

In all 3 directories, if we have files with the same name, add a number as identifier that will increase by 1 as required, e.g.

    README_1
    README_2

###### Some Tasks To Do

1. Add your name to the beginning, middle and end of every .c file
2. In all files substitute #include <linux/scripting.h> for every #include <linux/module.h> found
3. Fix your #include's order for the files coming from driver/i2c

We will need the following information under stats.post files:

File Names

    # of READMEs
    # of Kconfig
    # of Kbuild
    # of Makefiles
    # of .c files
    # of .h files
    # of .pl files
    # of others files
    Total number of files

File Content

    # of ocurrences for Linus
    # of ocurrences for kernel_start
    # of ocurrences for __init
    # of files in its filename containing the word gpio
    # of ocurrences for #include <linux/module.h>
    # of ocurrences for #include <linux/learningscripting.h>

##### Results

A message of Pass / Fail should be printed to stdout for each of the following:

- Our Total number of files is the same in both stats.pre and stats.post

============================================================================

## Core Development
### Programming Languages
#### Python

> Objective: Bring your basic skills up-to-speed
> Proficiency Level: Basic

Guess what? Port the previous script to Python :) remember to change the name of the host directory, now called, pythonlearning 


## Core Development
### Embedded
#### Linux Kernel Introduction

> Objective: Understand the Linux Kernel compilation process and built system
> Proficiency Level: Basic

##### Linux Kernel Compilation

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

##### Linux Kernel Build System Overview ]


Please read the "Kbuild: the Linux Kernel Build System" carefully, you will understand how this system works
[Kbuild Linux Kernel Build System](http://www.linuxjournal.com/content/kbuild-linux-kernel-build-system)

Do you want to do another Linux Kernel Build System exercise by writing a Hello World Kernel Module? then keep reading...

###### Linux Kernel Build System, Hello World Module

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

## Core Development
### Embedded
#### Embedded Systems Programming

> Objective: Learn various fundamentals issues as well as practical development skill in the area of embedded systems programming.
> Proficiency Level: Basic

Want to start learning! Feel free to code if possible! 2 Weeks Training (20 minute/lecture, 4 lectures/day)

[Summer Short Course on Embedded Systems Programming](http://rts.lab.asu.edu/web_ESP_Summer2014/ESP_Main_page.htm)

# End of file
