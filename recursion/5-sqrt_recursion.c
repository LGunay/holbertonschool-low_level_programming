#include "main.h"
/**
 * _sqrt_recursion - fills memory
 * @n: data
 *
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
/**
 * _sqrt - fills memory
 * @n: data
 * @k: num
 *
 * Return: square root
 */
int _sqrt(int n, int k)
{
	if (k > ((n / 2) + 1))
		return (-1);
	else if ((n / k) == k && (n % k) == 0)
		return (k);
	else
		return (_sqrt(n, k + 1));
}
