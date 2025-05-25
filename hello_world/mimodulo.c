#include <linux/module.h>	
#include <linux/kernel.h>	

MODULE_LICENSE("GPL"); 	
MODULE_DESCRIPTION("Modulo Hello World");
MODULE_AUTHOR("Grupo Foobar sdc");

int init_module(void) {
    printk(KERN_INFO "Hola mundo: modulo cargado en kernel.\n");
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "Hola mundo: modulo descargado del kernel.\n");
}