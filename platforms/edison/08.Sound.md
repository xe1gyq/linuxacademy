# Yocto Default Image

root@edison:~# lsusb
root@edison:~# opkg install alsa-utils
root@edison:~# aplay -Ll
root@edison:~# vi ~/.asoundrc
root@edison:~# vi /etc/asound.conf
pcm.!default sysdefault:Headset
root@edison:~# aplay /usr/share/sounds/alsa/Front_Center.wav
root@edison:~# aplay -D hw:1,0 /usr/share/sounds/alsa/Front_Center.wav
root@edison:~# mpg123

# End of File
