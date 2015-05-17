Edison

|00| README
|01| WiFi
|02| Opkg
|03| Mraa
|04| Upm

= Initial Configuration =

root@edison:~# uname -r
3.10.17-poky-edison+
root@Edison:~# configure_edison
 Configure Edison: Device Name
 Configure Edison: Device Password
 Configure Edison: WiFi Connection

= Debug =

boot > run do_ota
boot > run do_flash

= Flashing =

root@Edison:~# reboot ota

xe1gyq@sayulita:~/Downloads/toFlash$ sudo ./flashall.sh --recovery
 Starting Recovery mode
 Please plug and reboot the board
 Flashing IFWI

 XFSTK Downloader Solo 0.0.0 
 Copyright (c) 2015 Intel Corporation
 Build date and time: May 15 2015 22:29:28

 .Intel SoC Device Detection Found
 Parsing Commandline.... 
 Registering Status Callback.... 
 .Initiating Download Process.... 
 ...
 ...

xe1gyq@sayulita:~/Downloads/toFlash$ sudo ./flashall.sh 
 Using U-Boot target: edison-blankcdc
 Now waiting for dfu device 8087:0a99
 Please plug and reboot the board
 Flashing IFWI
 ##################################################] finished!
 ##################################################] finished!
 Flashing U-Boot
 ##################################################] finished!
 Flashing U-Boot Environment
 ##################################################] finished!
 Flashing U-Boot Environment Backup
 ##################################################] finished!
 Rebooting to apply partition changes
 Now waiting for dfu device 8087:0a99
 Flashing boot partition (kernel)
 ##################################################] finished!
 Flashing rootfs, (it can take up to 10 minutes... Please be patient)
 ...
 ...

= Development Platform =

# sudo apt-get install dfu-util

= More Space =

 mkdir /home/node_modules
 cd /usr/lib/node_modules
 tar cpf - * | (cd /home/node_modules; tar xpf -)
 cd ..
 rm -r node_modules
 ln -s /home/node_modules

= Links =

 http://www.intel.com/content/www/us/en/do-it-yourself/edison.html
 https://www-ssl.intel.com/content/www/us/en/library/viewmore.results.html?prTag=rintelproduct:inteldesktopboardsandkits/inteledisonproducts
 https://github.com/intel-iot-devkit/edison-guides/wiki
 https://learn.sparkfun.com/tutorials/edison-getting-started-guide
 https://learn.sparkfun.com/tutorials/loading-debian-ubilinux-on-the-edison
 http://www.helios.de/heliosapp/edison/index.html
 http://mendrugory.weebly.com/blog/intel-edison-and-python
 http://sparkfun28.rssing.com/chan-8070788/all_p15.html
 https://communities.intel.com/thread/55692
 https://github.com/richards-tech/meta-edison-rt
 https://github.com/edouardrosset

# End of file
