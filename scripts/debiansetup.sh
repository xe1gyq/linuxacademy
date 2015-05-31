#!/bin/sh

# apt-get

apt-get update
apt-get install git git-email htop python-pip python-dev python-qt4 cmake pkg-config libusb-dev libusb-1.0-0-dev gnuradio gnuradio-dev hackrf gr-osmosdr rtl-sdr gqrx-sdr

# pip

pip install psutil

# GNU Radio
git clone git://github.com/pybombs/pybombs
cd pybombs
./pybombs install gnuradio
./pybombs install hackrf
nano /etc/ld.so.conf.d/gnuradio.conf
 /home/xe1gyq/Projects/Radio/lib/
ldconfig

pip install psutil
