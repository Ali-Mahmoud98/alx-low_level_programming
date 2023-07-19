#include "function_pointers.h"
#define NULL ((void *) 0)
/**
  * print_name - function that prints name
  * @name: string name
  * @f: pointer to function that take string and return void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
