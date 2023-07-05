#include "main.h"
/**
  * sqrt_check - check if number has natural square root
  * @n: interger
  * @i: integer to check sqrt of n
  * Return: integer
  */

int sqrt_check(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_check(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_check(n, 0));
}
