#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - iterates through members of an array
  * @array: pointer to array
  * @size: size of array paramemter
  * @action: function passed as an argument
  * Return: void (nothing)
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
