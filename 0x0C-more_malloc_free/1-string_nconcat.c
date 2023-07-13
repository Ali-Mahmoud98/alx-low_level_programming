#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates two strings
  * @s1: string
  * @s2: string
  * @n: number of bytes from s2 to be added to s1
  * Return: pointer to char or NULL if function failed
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i = 0, l;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
		l = len1 + n + 1;
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
		l = len1 + len2 + 1;
	}

	if (str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (i < l)
	{
		str[i] = s2[i];
		i++;
	}
	str[l - 1] = '\n';
	return (str);
}
