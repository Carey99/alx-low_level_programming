#include<stdio.h>

/**
 * print_before_main - Include constructor to execute be4 main
 */
void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - To print before main
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
