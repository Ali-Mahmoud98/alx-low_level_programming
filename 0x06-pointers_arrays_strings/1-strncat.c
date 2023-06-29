#include "main.h"

/**
  * _strncat - copy number of n letters from string to another
  * @dest: string
  * @src: string to be concatenated to dest
  * @n: number of letters to be concatenated
  * Return: string dest+ n letters of src
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;

	while ((i < n) && (*src != '\0'))
	{
		dest[len + i] = *src;
		src++;
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
