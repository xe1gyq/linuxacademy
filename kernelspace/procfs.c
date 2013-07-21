#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/uaccess.h>

static char procfs_buffer[256];

int procfs_read(char *buffer, char **start, off_t offset, int count, int *eof, void *data)
{
	int buffer_length;
	buffer_length = snprintf(buffer, count, "%s", procfs_buffer);
	return buffer_length;
}

static int procfs_write(struct file *file, const char *buffer, unsigned long count, void *data)
{
	copy_from_user(procfs_buffer, buffer, count);
	procfs_buffer[count] = '\0';
	return count;
}

static int procfs_init_function(void)
{
	struct proc_dir_entry *fd_procfs = create_proc_entry("procfs_module", 0667, 0);

	printk(KERN_INFO "Procfs? Hello!\n");

	fd_procfs->read_proc = procfs_read;
	fd_procfs->write_proc = procfs_write;

	sprintf(procfs_buffer, "Procf? Hello!\n");
	return 0 ;
}

void __exit procfs_cleanup_function(void) {

	remove_proc_entry("procfs_module", NULL);
	printk(KERN_INFO "Goodbye Procfs!\n");

}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Procfs Module");

module_init(procfs_init_function);
module_exit(procfs_cleanup_function);
