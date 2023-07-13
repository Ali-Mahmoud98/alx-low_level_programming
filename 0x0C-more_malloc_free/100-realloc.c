#include "main.h"
#include <stdlib.h>
/**
  * _realloc - function that reallocates a memory block using malloc and free
  * @ptr: pointer to the memory previously allocated with a call to malloc
  * @old_size: is the size, in bytes, of the allocated space for ptr
  * @new_size: is the new size, in bytes of the new memory block
  * Return: void pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i = 0;
	unsigned int size;

	if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == old_size)
		return (ptr);
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	size = (old_size < new_size) ? old_size : new_size;
	for (; i < size; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}
