#include "main.h"
/**
  * clear_bit - sets the value of a bit to 1 at given index
  * @n: number
  * @index: index of bit which this function returns
  * Return: the value of a bit at a given index. if error ocured -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k = 1;

	if (index > 31)
		return (-1);
	k = ~k;
	*n &= k;
	return (1);
}
