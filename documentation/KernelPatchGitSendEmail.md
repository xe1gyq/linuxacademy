# Git Send Email

- [documentation Git Send Email](https://git-scm.com/docs/git-send-email)

```sh
root@workstation:~# apt install git-email
```

```sh
user@workstation:~/linux$ nano ~/.gitconfig
[sendemail]
	smtpEncryption = tls
	smtpServer = smtp.gmail.com
	smtpUser = hochob.vc@gmail.com
	smtpServerPort = 587
```