#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory using malloc
  * function should cause normal process termination with a
  * status value of 98
  * @b: size to be allocated
  * Return: void pointer to memory with size passed
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
