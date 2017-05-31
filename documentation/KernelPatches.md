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

# Git Status

```sh
user@workstation:~/linux$ git status
On branch multiple
Your branch is up-to-date with 'origin/master'.
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

	modified:   drivers/Kconfig
	modified:   drivers/Makefile

Untracked files:
  (use "git add <file>..." to include in what will be committed)

	drivers/helloworld/

no changes added to commit (use "git add" and/or "git commit -a")
```

# Git Add ../HelloWorld/HelloWorld.c

```sh
user@workstation:~/linux$ git add drivers/helloworld/helloworld.c
```

```sh
Drivers: Hello World Source Code

Optimized Hello World Kernel Module

Signed-off-by: Abraham Arce <xe1gyq@gmail.com>

# Please enter the commit message for your changes. Lines starting
# with '#' will be ignored, and an empty message aborts the commit.
# On branch multiple
# Your branch is up-to-date with 'origin/master'.
#
# Changes to be committed:
#       new file:   drivers/helloworld/helloworld.c
#
# Changes not staged for commit:
#       modified:   drivers/Kconfig
#       modified:   drivers/Makefile
#
# Untracked files:
#       drivers/helloworld/Kconfig
#       drivers/helloworld/Makefile
#
```

# Git Add ../HelloWorld/Makefile

