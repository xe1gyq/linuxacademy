# Tools

## GIT

> Objective: Develop your Git skills using github infrastructure
> Proficiency Level: Medium

If you want to master your Git skills at a super level then read Pro Git Book available at

[Git book](http://git-scm.com/book/en/v2)

Make sure you have git installed in your Linux box
- Under /etc/apt/sources.list append:

```sh
     deb http://ftp.debian.org/debian/ squeeze main contrib non-free
```

In your same Linux Box, let's update, upgrade and install git

```sh
root # apt-get update
root # apt-get upgrade
root # apt-get install git git-email
```
Configure your name and email under Git:

```sh
$ git config --global user.name "YourName YourLastName"
$ git config --global user.email "your.email.address@wherever.com"
```

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

#### Fork a Repo

In your web browser with a Github account previously created go to [xe1gyq/linuxlearning](https://github.com/xe1gyq/linuxlearning) and on the top-right corner of the page, click **Fork**

On command line in your Linux box type the commands below and look at the output

    user $ git clone https://github.com/YOUR_GITHUB_USERNAME/linuxlearning
    user $ cd linuxlearning
    user $ git remote -v
    user $ git remote add upstream https://github.com/xe1gyq/linuxlearning.git
    user $ git remote -v

#### Syncing a Fork

In the same linuxlearning cloned directory
 
    user $ git fetch upstream
    user $ git merge upstream/master

#### Code and Commit

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

This second part is the one you'll use everytime you modify a file. Now let's tell git we want to add a new file or include new changes into its database:

```sh
user $ git add c01.c
user $ git commit -s
```

```sh
githubusername: My first C Programming Example
<empty line>
My first example of a code in C language
```

When we commit our changes

```sh
First line: Title starting with your githubusername, 50 chars max
Second line: A blank line
    Third line: Description of the changes, as many lines as required, 80 chars max per line
```

#### Pushing to a remote

Push your local branch to your remote repository

```sh
user $ git push origin master
```

#### Using Pull Requests

This is a process entirely done at Github webpage, please follow the instructions found under the link above. So remember every time you'll work in your local repository you'll need to follow the next steps:

1. Syncing a Fork
2. Code and Commit
3. Pushing to a Remote
4. Using Pull Requests

You are now ready to go! Remember you will be pushing all your work to **xe1gyq/linuxacademy**
