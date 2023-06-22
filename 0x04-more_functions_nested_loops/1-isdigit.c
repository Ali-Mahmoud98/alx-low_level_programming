#include "main.h"

/**
  * _isdigit - checks input c
  * @c: integer
  * Return: 1 if c digit otherwise 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
