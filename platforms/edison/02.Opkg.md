OPKG
==

## Yocto Default Image

    root@edison:~# vi /etc/opkg/base-feeds.conf
     src all     http://iotdk.intel.com/repos/1.1/iotdk/all
     src x86 http://iotdk.intel.com/repos/1.1/iotdk/x86
     src i586    http://iotdk.intel.com/repos/1.1/iotdk/i586
    root@edison:~# opkg update
     Downloading http://iotdk.intel.com/repos/1.1/iotdk/all/Packages.
     Updated list of available packages in /var/lib/opkg/all.
     Downloading http://iotdk.intel.com/repos/1.1/iotdk/x86/Packages.
     Updated list of available packages in /var/lib/opkg/x86.
     Downloading http://iotdk.intel.com/repos/1.1/iotdk/i586/Packages.
     Updated list of available packages in /var/lib/opkg/i586.
    root@edison:~# opkg upgrade
    ...

    root@edison:~# echo "src mraa-upm http://iotdk.intel.com/repos/1.1/intelgalactic" > /etc/opkg/mraa-upm.conf
    root@edison:~# opkg update
    root@edison:~# opkg install libmraa0
    root@edison:~# opkg install upm

    root@edison:~# echo "src intel-iotdk http://iotdk.intel.com/repo/1.1/intelgalactic" > /etc/opkg/intel-iotdk.conf
    root@edison:~# opkg update
    root@edison:~# opkg upgrade

    root@edison:~# vi /etc/opkg/base-feeds.conf
     src/gz all http://repo.opkg.net/edison/repo/all
     src/gz edison http://repo.opkg.net/edison/repo/edison
     src/gz core2-32 http://repo.opkg.net/edison/repo/core2-32
    root@edison:~# opkg update
    root@edison:~# opkg install python-pip
    root@edison:~# scp user@machine:/home/user/Download/setuptools-15.2.tar.gz /home/root
    root@edison:~# tar zxf setuptools-15.2.tar.gz
    root@edison:~# python setuptools-15.2/ez_setup.py
    root@edison:~# pip install numpy

    root@edison:~# opkg install git
     Installing git (1.9.0-r0) to root...
     Downloading http://iotdk.intel.com/repos/1.1/iotdk/i586/git_1.9.0-r0_i586.ipk.
     Configuring git.
    root@edison:~# git config --global user.name "Name LastName"
    root@edison:~# git config --global user.email email@adress.com
    root@edison:~# opkg install libsdl-1.2-dev libv4l-dev
    root@edison:~# opkg install fswebcam

root@edison:~# opkg install cmake espeak nano 
