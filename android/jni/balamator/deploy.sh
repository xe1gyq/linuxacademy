#!/bin/sh

set -x

ROOT=`pwd`
INCLUDE=$ROOT/include
LIB=$ROOT/lib
HAL=$LIB/balamator

# Name of Packages
BALAMATORLIB=$HAL/balamator.c
BALAMATORMK=$HAL/Android.mk
BALAMATORI=$INCLUDE/balamator.h

# Local Integration
HARDWAREMS=$ROOT/hardware/libhardware/modules/balamator
HARDWAREMI=$ROOT/hardware/libhardware/include/hardware

# Product Integration
AOSP=/home/student/aosp
COMPANY=newcircle
PRODUCT=alpha
PRODUCTMO=$AOSP/device/$COMPANY/$PRODUCT/lib/balamator
PRODUCTIO=$AOSP/device/$COMPANY/$PRODUCT/include

# AOSP Integration
AOSP=/home/student/aosp
HARDWAREMO=$AOSP/hardware/libhardware/modules/balamator
HARDWAREIO=$AOSP/hardware/libhardware/include/hardware

test -d $INCLUDE || mkdir $INCLUDE
test -d $LIB || mkdir $LIB
test -d $BALAM || mkdir $BALAM

test -d $PRODUCTMO || mkdir $PRODUCTMO
test -d $PRODUCTIO || mkdir $PRODUCTIO

test -d $HARDWAREMO || mkdir $HARDWAREMO
test -d $HARDWAREIO || mkdir $HARDWAREIO

cp $BALAMATORLIB $PRODUCTMO
cp $BALAMATORMK $PRODUCTMO
cp $BALAMATORI $PRODUCTIO

# Enf of File
