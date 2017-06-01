# Git Send Email

- [documentation Git Send Email](https://git-scm.com/docs/git-send-email)

```sh
root@workstation:~# apt install git-email
```

```sh
user@workstation:~/linux$ nano ~/.gitconfig
[user]
        name = Abraham Arce
        email = email@gmail.com
[push]
        default = simple
[sendemail]
        smtpEncryption = tls
        smtpServer = smtp.gmail.com
        smtpUser = email@gmail.com
        smtpServerPort = 587
```

```sh
user@workstation:~/linux$ git format-patch -M origin/master
0001-Drivers-Hello-World.patch
```

```sh
user@workstation:~/linux$ git format-patch -M origin/master -o patches/
patches/0001-Drivers-Hello-World-Source-Code.patch
patches/0002-Drivers-Hello-World-Makefile.patch
patches/0003-Drivers-Hello-World-Kconfig.patch
patches/0004-Drivers-Hello-World-Compilation.patch
patches/0005-Drivers-Hello-World-Kernel-Configuration.patch
```

# Cover Letter

```sh
xe1gyq@server:~/linux$ rm patches/*
```

```sh
xe1gyq@server:~/linux$ git format-patch --cover-letter -M origin/master -o patches/
patches/0000-cover-letter.patch
patches/0001-Drivers-Hello-World-Source-Code.patch
patches/0002-Drivers-Hello-World-Makefile.patch
patches/0003-Drivers-Hello-World-Kconfig.patch
patches/0004-Drivers-Hello-World-Compilation.patch
patches/0005-Drivers-Hello-World-Kernel-Configuration.patch
xe1gyq@server:~/linux$ 
```

```sh
From 52441d5113d84f51d9090a94fe3be1df41411323 Mon Sep 17 00:00:00 2001
From: Abraham Arce <xe1gyq@gmail.com>
Date: Wed, 31 May 2017 19:01:24 -0500
Subject: [PATCH 0/5] *** SUBJECT HERE ***

*** BLURB HERE ***

Abraham Arce (5):
  Drivers: Hello World Source Code
  Drivers: Hello World Makefile
  Drivers: Hello World Kconfig
  Drivers: Hello World Compilation
  Drivers: Hello World Kernel Configuration

 drivers/Kconfig                 |  2 ++
 drivers/Makefile                |  1 +
 drivers/helloworld/Kconfig      |  9 +++++++++
 drivers/helloworld/Makefile     |  1 +
 drivers/helloworld/helloworld.c | 23 +++++++++++++++++++++++
 5 files changed, 36 insertions(+)
 create mode 100644 drivers/helloworld/Kconfig
 create mode 100644 drivers/helloworld/Makefile
 create mode 100644 drivers/helloworld/helloworld.c

-- 
2.1.4
```