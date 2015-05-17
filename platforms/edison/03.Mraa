# Yocto Default Image

root@Edison:~# git clone https://github.com/intel-iot-devkit/mraa.git
root@edison:~# mkdir mraa/build && cd $_
root@edison:~# cmake ..
root@edison:~# make
root@edison:~# make install
root@edison:~# nano /etc/ld.so.conf
/usr/local/lib/i386-linux-gnu/
root@edison:~# ldconfig
root@edison:~# ldconfig -p | grep mraa
root@edison:~# export PYTHONPATH=$PYTHONPATH:$(dirname $(find /usr/local -name mraa.py))
root@edison:~# nano ~/.bashrc
export PYTHONPATH=$PYTHONPATH:$(dirname $(find /usr/local -name mraa.py))

root@edison:~# cd mraa/examples
root@edison:~# gcc -lmraa hellomraa.c -o hellomraa
root@edison:~# ./hellomraa
 hello mraa
  Version: v0.6.2
  Running on Intel Edison

# Ubilinux

Follow
 https://learn.sparkfun.com/tutorials/installing-libmraa-on-ubilinux-for-edison

# End of File

