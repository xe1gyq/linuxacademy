# Git Send Email

- [documentation Git Send Email](https://git-scm.com/docs/git-send-email)

```sh
root@workstation:~# apt install git-email
```

```sh
user@workstation:~/linux$ nano ~/.gitconfig
[user]
        name = Abraham Arce
        email = xe1gyq@gmail.com
[push]
        default = simple
[sendemail]
        smtpEncryption = tls
        smtpServer = smtp.gmail.com
        smtpUser = hochob.vc@gmail.com
        smtpServerPort = 587

[sendemail]
	smtpEncryption = tls
	smtpServer = smtp.gmail.com
	smtpUser = hochob.vc@gmail.com
	smtpServerPort = 587
```