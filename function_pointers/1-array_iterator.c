#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: 0 if false, something else otherwise.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
