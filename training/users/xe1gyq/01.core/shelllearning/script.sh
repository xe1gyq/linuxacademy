#!/bin/sh

set -x

LOCATION=$1
VERSION=$2
FILETYPE=$3

# Variables kernel.org
WGET=wget
KERNELORG_PATH="https://www.kernel.org/pub/linux/kernel/v3.x/"
KERNELORG_FILE="linux-"
KERNELORG_VERSION=$VERSION
KERNELORG_FILETYPE=".tar."$FILETYPE
KERNELORG_OURFILE="$KERNELORG_FILE$KERNELORG_VERSION$KERNELORG_FILETYPE"

# Variables directory structure
DIRECTORY_ROOT=`pwd`
DIRECTORY_KERNELIMAGES=$DIRECTORY_ROOT/kernelimages
DIRECTORY_PREWORKSPACE=$DIRECTORY_ROOT/preworkspace
DIRECTORY_POSTWORKSPACE=$DIRECTORY_ROOT/postworkspace

# Variables official structure
OFFICIAL_KERNEL_NAME="$KERNELORG_FILE$KERNELORG_VERSION"
OFFICIAL_KERNEL_DIRECTORY="$DIRECTORY_KERNELIMAGES/$OFFICIAL_KERNELNAME"
OFFICIAL_STATS_PRE="stats.pre"
OFFICIAL_STATS_POST="stats.post"

files_count() {
  FILETYPE=$1
  find . -name ${FILETYPE} | wc -l
}

files_copy() {
  FILETYPE=$1
  find . -name ${FILETYPE} | xargs cp --parents -t $DIRECTORY_POSTWORKSPACE
}

string_search() {
  STRING=$1
  grep -R $STRING .
  find . -type f -print -exec grep $STRING {} \;
}

download() {
  cd $DIRECTORY_KERNELIMAGES
  echo "$KERNELORG_PATH$KERNELORG_FILE$KERNELORG_VERSION$KERNELORG_FILETYPE"
  wget $KERNELORG_PATH$KERNELORG_FILE$KERNELORG_VERSION$KERNELORG_FILETYPE
  cd $DIRECTORY_ROOT
}

directory_create() {
  test -d $DIRECTORY_KERNELIMAGES || mkdir $DIRECTORY_KERNELIMAGES
  test -d $DIRECTORY_PREWORKSPACE || mkdir $DIRECTORY_PREWORKSPACE
  test -d $DIRECTORY_POSTWORKSPACE || mkdir $DIRECTORY_POSTWORKSPACE
}

directory_cleanup() {
  echo
}

uncompress() {
  cd $DIRECTORY_KERNELIMAGES
  tar xf $KERNELORG_OURFILE
  cd $DIRECTORY_ROOT
}

official_setup() {
  cp -r $DIRECTORY_KERNELIMAGES/$OFFICIAL_KERNEL_NAME/* $DIRECTORY_PREWORKSPACE
}

preprocessing() {
  cd $DIRECTORY_PREWORKSPACE
  files_count "README" && files_copy "README"
  files_count "Kconfig" && files_copy "Kconfig"
  files_count "Kbuild" && files_copy "Kbuild"
  files_count "Makefile" && files_copy "Makefile"
  files_count "*.c" && files_copy "*.c"
  files_count "*.h" && files_copy "*.h"
  files_count "*.pl" && files_copy "*.pl"
  cd $DIRECTORY_ROOT
}

directory_create
#download
uncompress
official_setup
preprocessing
#directory_cleanup

# End of file
