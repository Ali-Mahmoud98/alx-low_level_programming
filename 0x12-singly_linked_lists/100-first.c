#include <stdio.h>
/**
 * first - print before main.
 *
 * uses the >>constructor<< attribute in a function declaration
 * The >>constructor<< attribute is a GNU C extension that allows you to
 * specify a function to be executed automatically before the main
 * function is called.
 */
void first(void) __attribute__ ((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
