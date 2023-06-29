#include "main.h"
/**
 * cap_string - make all first characters in words Uppercase
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index == 0)
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
		} else if (index > 0 && (str[index - 1] == ' '
					|| str[index - 1] == '\n'
					|| str[index - 1] == ','
					|| str[index - 1] == ';'
					|| str[index - 1] == '.'
					|| str[index - 1] == '!'
					|| str[index - 1] == '?'
					|| str[index - 1] == '"'
					|| str[index - 1] == '\t'
					|| str[index - 1] == '('
					|| str[index - 1] == ')'
					|| str[index - 1] == '{'
					|| str[index - 1] == '}'))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
		}
		index++;
	}

	return (str);
}
