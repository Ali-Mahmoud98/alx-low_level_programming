#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: number of rows of av (height of av)
 * @av: two dimentional array
 * Return: NULL if ac=0 or av=NULL else return string
 */
char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int i = 0;
	int len = 0;
	char *str;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			i++;
	}
	/*number of newlines equal ac*/
	i += ac;
	str = (char *) malloc((sizeof(char) * i) + 1);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		y = 0;
		while (1)
		{
			str[len] = av[x][y];
			len++;
			y++;
			if (av[x][y] == '\0')
			{
				str[len++] = '\n';
				break;
			}
		}
	}
	str[len] = '\0';

	return (str);
}
