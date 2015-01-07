#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/uaccess.h>

static char procfs_buffer[256];
struct proc_dir_entry *fd_procfs;

ssize_t procfs_read(struct file *file, char __user *buffer, size_t count, loff_t *offset)
{
	int buffer_length;
	buffer_length = snprintf(buffer, count, "%s", procfs_buffer);
	return buffer_length;
}

ssize_t procfs_write(struct file *file, const char __user *buffer, size_t count, loff_t *offset)
{
	copy_from_user(procfs_buffer, buffer, count);
	procfs_buffer[count] = '\0';
	return count;
}

static int procfs_init_function(void)
{
	const static struct file_operations fops = {
		.owner = THIS_MODULE,
		.write = procfs_write,
		.read = procfs_read
	};

	fd_procfs = proc_create("procfs_module", 0667, NULL, &fops);

	printk(KERN_INFO "Procfs? Hello!\n");

	sprintf(procfs_buffer, "Procf? Hello!\n");
	return 0 ;
}

void __exit procfs_cleanup_function(void) {

	remove_proc_entry("procfs_module", fd_procfs);
	printk(KERN_INFO "Goodbye Procfs!\n");

}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Procfs Module");

module_init(procfs_init_function);
module_exit(procfs_cleanup_function);
