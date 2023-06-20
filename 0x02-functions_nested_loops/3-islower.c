#include "main.h"
/**
  * _islower - takes one param
  * checks if c is lower case char
  * Return: if c lower case return 1
  * else return 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
