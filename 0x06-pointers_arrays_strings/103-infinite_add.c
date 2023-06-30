#include "main.h"
/**
 * rev_string - reverse string
 * @str: string
 */
void rev_string(char *str)
{
	int len = 0;
	int index = 0;
	char temp;

	while (str[len] != '\0')
		len++;
	for (index = 0; index < len / 2; index++)
	{
		temp = str[index];
		str[index] = str[len - index - 1];
		str[len - index - 1] = temp;
	}
}
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, len1 = 0, len2 = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (n1[len1] != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;
	len1--;
	len2--;
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	while (len2 >= 0 || len1 >= 0 || overflow == 1)
	{
		if (len1 < 0)
			val1 = 0;
		else
			val1 = n1[len1] - '0';
		if (len2 < 0)
			val2 = 0;
		else
			val2 = n2[len2] - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		len1--;
		len2--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
