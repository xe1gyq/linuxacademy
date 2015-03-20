#!/bin/sh

set -x

ROOT=`pwd`
INCLUDE=$ROOT/include/
LIB=$ROOT/lib/
BALAM=$LIB/balam/

AOSP=/home/student/aosp/
HARDWAREMO=$AOSP/hardware/libhardware/modules/balam/
HARDWAREIO=$AOSP/hardware/libhardware/include/hardware/

HARDWAREMS=$ROOT/hardware/libhardware/modules/balam/
HARDWAREMI=$ROOT/hardware/libhardware/include/hardware/

HARDWAREM_BALAMC=$HARDWAREMS/balam.c
HARDWAREM_ANDROIDMK=$HARDWAREMS/Android.mk
HARDWAREI_BALAMH=$HARDWAREMI/balam.h

test -d $HARDWAREMO || mkdir $HARDWAREMO
test -d $HARDWAREIO || mkdir $HARDWAREIO
test -d $INCLUDE || mkdir $INCLUDE
test -d $LIB || mkdir $LIB
test -d $BALAM || mkdir $BALAM

cp $HARDWAREM_BALAMC $HARDWAREMO
cp $HARDWAREM_ANDROIDMK $HARDWAREMO
cp $HARDWAREI_BALAMH $HARDWAREIO

cp $HARDWAREM_BALAMC $BALAM
cp $HARDWAREM_ANDROIDMK $BALAM
cp $HARDWAREI_BALAMH $INCLUDE
