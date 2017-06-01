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