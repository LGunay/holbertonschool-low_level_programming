#include <stdlib.h>
#include <stdio.h>
/**
  * int_index - init
  * @array: array
  * @size: size
  * @cmp: action
  * Return: return
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
