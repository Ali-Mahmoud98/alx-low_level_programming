#include "main.h"

/**
  * _isupper - checks letter is uppercase
  * or lowercase
  * @c: integer
  * Return: 0 if lowercase
  * and 1 if uppercase
  */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    return (0); 
}