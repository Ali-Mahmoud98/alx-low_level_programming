#include "main.h"
/**
  * _isalpha - takes one param
  * checks if c is a letter
  * Return: if c is letter return 1
  * else return 0
  */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
