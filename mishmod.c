// A dumb kernel module.
// 2017-4-16
// Mischa Spiegelmock

#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <asm/current.h>
#include <linux/sched.h>

static int mishmod_init(void) {
    printk(KERN_INFO "Hello world from MishMod.\n");
    return 0;  // ok
}  

static void mishmod_exit(void) {
     printk(KERN_INFO "Bye from MishMod.\n"); 
}  

module_init(mishmod_init);
module_exit(mishmod_exit);

MODULE_AUTHOR("Mischa Spiegelmock"); 
MODULE_LICENSE("Dual BSD/GPL"); 
MODULE_DESCRIPTION("Contractually obligated 'Hello, world.' first program");
