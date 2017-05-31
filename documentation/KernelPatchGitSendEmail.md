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
patches/0001-Drivers-Hello-World.patch
```

```sh
user@workstation:~/linux$ git send-email patches/0001-Drivers-Hello-World.patch
patches/0001-Drivers-Hello-World.patch
Who should the emails be sent to (if any)? xe1gyq@gmail.com
Message-ID to be used as In-Reply-To for the first email (if any)? 
(mbox) Adding cc: Abraham Arce <xe1gyq@gmail.com> from line 'From: Abraham Arce <xe1gyq@gmail.com>'
(body) Adding cc: Abraham Arce <xe1gyq@gmail.com> from line 'Signed-off-by: Abraham Arce <xe1gyq@gmail.com>'

From: Abraham Arce <xe1gyq@gmail.com>
To: xe1gyq@gmail.com
Subject: [PATCH] Drivers: Hello World
Date: Wed, 31 May 2017 18:21:18 -0500
Message-Id: <1496272878-7212-1-git-send-email-xe1gyq@gmail.com>
X-Mailer: git-send-email 2.1.4

    The Cc list above has been expanded by additional
    addresses found in the patch commit message. By default
    send-email prompts before sending whenever this occurs.
    This behavior is controlled by the sendemail.confirm
    configuration setting.

    For additional information, run 'git send-email --help'.
    To retain the current behavior, but squelch this message,
    run 'git config --global sendemail.confirm auto'.

Send this email? ([y]es|[n]o|[q]uit|[a]ll): y
Password for 'smtp://hochob.vc@gmail.com@smtp.gmail.com:587': 
Password for 'smtp://hochob.vc@gmail.com@smtp.gmail.com:587': 
OK. Log says:
Server: smtp.gmail.com
MAIL FROM:<xe1gyq@gmail.com>
RCPT TO:<xe1gyq@gmail.com>
From: Abraham Arce <xe1gyq@gmail.com>
To: xe1gyq@gmail.com
Subject: [PATCH] Drivers: Hello World
Date: Wed, 31 May 2017 18:26:52 -0500
Message-Id: <1496273212-7350-1-git-send-email-xe1gyq@gmail.com>
X-Mailer: git-send-email 2.1.4

Result: 250 2.0.0 OK 1496273188 v188sm27267079pgv.51 - gsmtp

user@workstation:~/linux$ 
```