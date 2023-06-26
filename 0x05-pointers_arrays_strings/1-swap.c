#include "main.h"

/**
  * swap_int - function swap two int values.
  * @a: integer.
  * @b: integer.
  */
void swap_int(int *a, int *b)
{
	/*swap using xor*/
	*a = *a ^ *b;
	/*assume a = 2 and b = 1*/
	/*a = 2 ^ 1 = 3 */
	*b = *a ^ *b;/*3 ^ 1 = 2*/
	*a = *a ^ *b;/*3 ^ 2 = 1*/
	/*swap finished using xor*/
	/*without using 3rd variable*/
}
