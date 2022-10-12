#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: parameter passed to the function
 * @size: the size of the array passed as parameter
 * @cmp: pointer to the function used to caompare values
 * Return: index of the first element to which cmp is pointing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}


