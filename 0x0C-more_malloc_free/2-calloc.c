#include "main.h"
#include <stdlib.h>
/**
 * _memset - function that fills a block of memory with a particular value
 * @s: pointer to the memory block to be filled
 * @b: value to be set in each byte
 * @n: number of bytes to be set
 * Return: pointer to the filled memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
/**
  * _calloc - function that allocates memory for an array
  * @nmemb: number of elements in array
  * @size: size of one element
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
