obj-m += module.o
obj-m += timer.o
obj-m += tasklet.o
obj-m += workqueue.o
obj-m += kthread.o
obj-m += input.o
obj-m += procfs.o
obj-m += sysfs.o
obj-m += gpio.o
obj-m += i2c_adapter.o
obj-m += i2c_chip.o
obj-m += libfs.o
obj-m += seqfile.o
obj-m += usb.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

# End of file
