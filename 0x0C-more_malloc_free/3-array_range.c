#include <stdlib.h>
#include "main.h"
/**
  * array_range - function that creates an array of integers.
  * The array created should contain all the values from
  * min (included) to max (included) ordered from min to max.
  * @min: int
  * @max: int
  * Return: pointer to array of integers or NULL if faild
  */

int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *ptr = (int *) malloc(sizeof(int) * size);

	if (ptr == NULL || min > max)
		return (NULL);
	while (min <= max)
		*ptr++ = min++;
	ptr -= size;
	return (ptr);
}
