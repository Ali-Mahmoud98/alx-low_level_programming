#include "main.h"

/**
  * _strcpy - unction that copies the string pointed to by src
  * including the terminating null byte (\0),
  * to the buffer pointed to by dest.
  *
  * @dest: string to contain a copy of src content.
  * @src: string to copy its content to dest.
  *
  * Return: pointer to dest.
  */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (1)
	{
		*dest = *src;
		len++;
		if (*src == '\0')
			break;
		src++;
		dest++;
	}
	dest = dest - (len - 1);
	return (dest);
}
