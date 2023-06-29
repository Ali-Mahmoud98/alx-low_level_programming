#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	char *letters = "AaEeOoTtLl";
	char *code = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
				str[i] = code[j];
		}
	}

	return (str);
}
