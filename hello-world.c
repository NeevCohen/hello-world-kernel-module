#include <linux/module.h>

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Neev Cohen");

static int __init hello_init(void) {
	printk(KERN_INFO "Hello world!\n");
	return 0;
};

static void __exit hello_exit(void) {
	printk(KERN_INFO "Goodbye cruel world!\n");
};

module_init(hello_init);
module_exit(hello_exit);

