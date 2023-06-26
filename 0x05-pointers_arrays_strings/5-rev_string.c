#include "main.h"

/**
  * rev_string - function reverse string
  * @s: string input
  */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
		i++;

	i--;
	for (j = 0; j < (i / 2); j++)
	{
		temp = s[i];

		s[i] = s[l - i];
		s[l - i] = temp;
	}
}
