obj-m += module.o
obj-m += timer.o
obj-m += tasklet.o
obj-m += workqueue.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

# End of file
