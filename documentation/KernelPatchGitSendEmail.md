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