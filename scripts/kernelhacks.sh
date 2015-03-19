#!/bin/sh

# =============================================================================
# Variables General
# =============================================================================

# None

# =============================================================================
# Functions
# =============================================================================

# None

# =============================================================================
# Main
# =============================================================================

# Netconsole
# https://www.kernel.org/doc/Documentation/networking/netconsole.txt
# In our debugged system
echo 'modprobe netconsole netconsole=@/,9876@192.168.1.72/'
# In our remote stable system
echo 'nc -u -l 9876'

# Debugging Level
echo 'dmesg -n debug'

# Debugfs
mount -t debugfs none /sys/kernel/debug
