#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;


	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	while (len >= 0)
	{
		ptr[len] = str[len];
		len--;
	}

	return (ptr);
}
