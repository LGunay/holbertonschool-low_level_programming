#include "main.h"
/**
  * get_bit - sets the value of a bit to 1 at given index
  * @n: number
  * @index: index of bit which this function returns
  * Return: the value of a bit at a given index. if error ocured -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return ((n >> index) & 1);
}
