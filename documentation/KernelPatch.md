# Kernel Patch

```sh
xe1gyq@server:~/linux$ git status
On branch master
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
user@workstation:~/linux$ 
```

```sh
user@workstation:~/linux$ git add drivers/Kconfig drivers/Makefile drivers/helloworld/
```

```sh
user@workstation:~/linux$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

	modified:   drivers/Kconfig
	modified:   drivers/Makefile
	new file:   drivers/helloworld/Kconfig
	new file:   drivers/helloworld/Makefile
	new file:   drivers/helloworld/helloworld.c

user@workstation:~/linux$ 
```

```sh
user@workstation:~/linux$ git commit -s
```

```sh
Drivers: Hello World

Optimized Hello World Kernel Module

Signed-off-by: Abraham Arce <xe1gyq@gmail.com>

# Please enter the commit message for your changes. Lines starting
# with '#' will be ignored, and an empty message aborts the commit.
#
# Date:      Wed May 31 18:01:26 2017 -0500
#
# On branch master
# Your branch is ahead of 'origin/master' by 1 commit.
#   (use "git push" to publish your local commits)
#
# Changes to be committed:
#       modified:   drivers/Kconfig
#       modified:   drivers/Makefile
#       new file:   drivers/helloworld/Kconfig
#       new file:   drivers/helloworld/Makefile
#       new file:   drivers/helloworld/helloworld.c
#
```

```sh
[master b81849d] Drivers: Hello World
 5 files changed, 36 insertions(+)
 create mode 100644 drivers/helloworld/Kconfig
 create mode 100644 drivers/helloworld/Makefile
 create mode 100644 drivers/helloworld/helloworld.c
user@workstation:~/linux$ 
```