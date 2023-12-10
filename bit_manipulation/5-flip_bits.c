#include "main.h"
/**
  * flip_bits - number of bits need to flip to get from one number to another.
  * @n: first number
  * @m: second number
  * Return: number of bits need to flip to get from one number to another.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = m ^ n;
	int counter = 0;

	while (k)
	{
		if (k & 1)
			counter++;
		k >>= 1;
	}
	return (counter);
}
