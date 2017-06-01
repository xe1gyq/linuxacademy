# Quilt

```
user@workstation:~/linux$ quilt new patches/0001-Drivers-Hello-World-Source-Code.patch
Patch patches/quilt new patches/0001-Drivers-Hello-World-Source-Code.patch

user@workstation:~/linux$ quilt new patches/0002-Drivers-Hello-World-Makefile.patch
Patch patches/0002-Drivers-Hello-World-Makefile.patch  is now on top

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