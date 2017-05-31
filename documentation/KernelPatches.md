# Kernel Patches

```sh
user@workstation:~/linux$ git branch -a
* master
  remotes/origin/HEAD -> origin/master
  remotes/origin/master
user@workstation:~/linux$ git checkout -b multiple origin/master
Branch multiple set up to track remote branch master from origin.
Switched to a new branch 'multiple'
user@workstation:~/linux$ 
```

```sh
xe1gyq@server:~/linux$ git apply patches/0001-Drivers-Hello-World.patch
patches/0001-Drivers-Hello-World.patch:58: new blank line at EOF.
+
patches/0001-Drivers-Hello-World.patch:94: new blank line at EOF.
+
warning: 2 lines add whitespace errors.
xe1gyq@server:~/linux$ 
```