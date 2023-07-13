#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - checks if a string contains a non-digit char
 * @str: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
  * _strlen - count length of string
  * @str: string
  * Return: length
  */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int *res, i, j, carry, d1, d2, total_len, len1, len2;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	total_len = len1 + len2 + 1;
	printf("%d\n", total_len);
	res = (int *) calloc(total_len, sizeof(int));
	if (res == NULL)
		return (1);
	for (i = len1 - 1; i >= 0; i--)
	{
		d1 = argv[1][i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			d2 = argv[2][j] - '0';
			carry += (d1 * d2) + res[i + j + 1];
			res[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[i + j + 1] += carry;
	}
	j = 0;
	for (i = 0; i < total_len - 1; i++)
	{
		if (res[i])
			j = 1;
		if (j)
			_putchar(res[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
