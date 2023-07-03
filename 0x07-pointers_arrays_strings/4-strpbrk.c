#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	/*the ascii of null char is zero*/
	while (*s)
	{
		for (i = 0; accept[i]; k++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
