#include "main.h"
/**
  * positive_or_negative - checks i positive
  * or negative or zero.
  * @i: integer number
  */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is psitive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
