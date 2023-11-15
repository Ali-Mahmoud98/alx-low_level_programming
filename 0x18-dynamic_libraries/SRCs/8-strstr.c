#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *i)
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
