#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * @i: pointer to interger
 * Return: number of words and length of s
 */
int count_word(char *s, int *i)
{
	int words = 0;

	*i = 0;
	while (s[*i] != '\0')
	{
		if (s[*i] != ' ' &&
				(s[(*i) + 1] == ' ' || s[(*i) + 1] == '\0'))
			words++;
		(*i)++;
	}
	return (words);
}

/**
  * strtow - splits a string into words
  * @str: string
  * Return: array of strings or NULL if str == NULL or str == ""
  */
char **strtow(char *str)
{
	int len, x, y, i = 0;
	int words = count_word(str, &len);
	char **arr = (char **) malloc(sizeof(char *) * (words + 1));

	if (words == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (x = 0; x < words; x++)
	{
		int c = 0;

		arr[x] = (char *) malloc(sizeof(char));
		if (arr[x] == NULL)
		{
			for (int j = 0; j < x; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (y = i; y <= len; y++)
		{
			if (str[y] != ' ' && str[y] != '\0')
			{
				arr[x][c] = str[y];
				c++;
				arr[x] = (char *) realloc(arr[x], (c + 1));
				if (str[y + 1] == ' ' || str[y + 1] == '\0')
				{
					arr[x][c] = '\0';
					i++;
					break;
				}
			}
			i++;
		}
	}
	arr[words] = NULL;
	return (arr);
}
