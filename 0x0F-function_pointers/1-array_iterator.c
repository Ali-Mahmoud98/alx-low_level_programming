#include "function_pointers.h"
/**
  * array_iterator -  function that executes a function given
  * as a parameter on each element of an array
  *
  * @array: pointer to int
  * @size: is the size of the array
  * @action: is a pointer to the function you need to use
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (array == NULL || action == NULL || size == 0)
		return;

	for (; index < size; index++)
		action(array[index]);
}
