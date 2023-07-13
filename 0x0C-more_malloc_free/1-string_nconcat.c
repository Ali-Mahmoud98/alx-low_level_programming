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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n < len2)
		l = len1 + n + 1;
	else
		l = len1 + len2 + 1;
	str = malloc(sizeof(char) * l);
	if (str == NULL)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	while (i < (l - 1))
	{
		str[i] = s2[i - len1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
