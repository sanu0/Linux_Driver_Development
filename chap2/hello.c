#include<linux/module.h>
#include<linux/init.h>

//we are adding static here so that these modle functions are only visible 
//here and not from outside this module

// __init and __exit are the macros that help us to optimie the memory
// These macros are used so that those functions with these macros are known to be used only once
// in the kernel module and not more than once so that kernel knows it and exclude it out of the memory
// and optimise the uses of the memory / RAM as it is not going to be used again.

static int __init my_init(void){
        printk("hello- Hello, Kernel!\n");
        return 0;
}

static void __exit my_exit(void){
        printk("hello - Goodbye, Kernel!\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
//These are the metadeta tags
MODULE_AUTHOR("ksanu");
MODULE_DESCRIPTION("A simple Hello World linux kernel module");
