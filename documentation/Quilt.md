# Quilt


```sh
user@workstation:~/linux$ git reset --hard d602fb6844940b23afb64d4bf70bb963c15571ee
HEAD is now at d602fb6 Merge branch 'overlayfs-linus' of git://git.kernel.org/pub/scm/linux/kernel/git/mszeredi/vfs
user@workstation:~/linux$ 
```

```
user@workstation:~/linux$ quilt series
user@workstation:~/linux$ 
```

```
user@workstation:~/linux$ quilt new patches/0001-Drivers-Hello-World-Source-Code.patch
Patch patches/quilt new patches/0001-Drivers-Hello-World-Source-Code.patch
```

```sh
user@workstation:~/linux$ quilt push
Applying patch patches/0001-Drivers-Hello-World-Source-Code.patch
patching file drivers/helloworld/helloworld.c

Now at patch patches/0001-Drivers-Hello-World-Source-Code.patch
user@workstation:~/linux$ 
```

```sh
user@workstation:~/linux$ quilt new patches/0002-Drivers-Hello-World-Makefile.patch
Patch patches/0002-Drivers-Hello-World-Makefile.patch  is now on top
```

```
user@workstation:~/linux$ quilt series
patches/0001-Drivers-Hello-World-Source-Code.patch
patches/0002-Drivers-Hello-World-Makefile.patch
user@workstation:~/linux$ 
```

```sh
user@workstation:~/linux$ quilt new patches/0003-Drivers-Hello-World-Kconfig.patch 
Patch patches/0003-Drivers-Hello-World-Kconfig.patch is now on top

user@workstation:~/linux$ quilt new patches/0004-Drivers-Hello-World-Compilation.patch 
Patch patches/0004-Drivers-Hello-World-Compilation.patch is now on top

user@workstation:~/linux$ quilt new patches/0005-Drivers-Hello-World-Kernel-Configuration.patch 
Patch patches/0005-Drivers-Hello-World-Kernel-Configuration.patch is now on top
```

```sh
user@workstation:~/linux$ quilt series
patches/0001-Drivers-Hello-World-Source-Code.patch
patches/0002-Drivers-Hello-World-Makefile.patch
patches/0003-Drivers-Hello-World-Kconfig.patch
patches/0004-Drivers-Hello-World-Compilation.patch
patches/0005-Drivers-Hello-World-Kernel-Configuration.patch
```

```sh
user@workstation:~/linux$ quilt push
File series fully applied, ends at patch patches/0005-Drivers-Hello-World-Kernel-Configuration.patch
```

```sh
user@workstation:~/linux$ quilt pop
Patch patches/0005-Drivers-Hello-World-Kernel-Configuration.patch appears to be empty, removing

Now at patch patches/0004-Drivers-Hello-World-Compilation.patch
user@workstation:~/linux$ 
```