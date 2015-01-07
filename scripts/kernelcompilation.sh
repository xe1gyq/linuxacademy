#!/bin/sh

# =============================================================================
# Variables General
# =============================================================================

ACTUAL_LOCATION=`pwd`
KERNEL_LOCATION=$1

# =============================================================================
# Functions
# =============================================================================

setup() {
	cd $KERNEL_LOCATION
}

cleanup() {
	cd $ACTUAL_LOCATION
}

gitUpdate() {
	git pull
}

compileKernel() {
	make oldconfig
	make -j3
	su root -c "make modules_install"
	su root -c "make install"
}

# =============================================================================
# Main
# =============================================================================

setup
gitUpdate
compileKernel
cleanup
