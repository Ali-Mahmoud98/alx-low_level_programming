#include "main.h"

/**
  * _strcat - concatinate two string
  * @dest: string to be expanded
  * @src: strint to be added to dest
  * Return: string dest+src
  */
char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (*src != '\0')
	{
		dest[len] = *src;
		src++;
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
