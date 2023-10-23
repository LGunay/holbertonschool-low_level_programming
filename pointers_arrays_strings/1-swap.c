#include "main.h"
#include <stdio.h>

/**
* swap_int - check the code
* @a: pointer
* @b: pointer
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
