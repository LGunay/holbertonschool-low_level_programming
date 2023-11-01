#include "main.h"
/**
  * find_prime - find prime
  * @n: data
  * @k: data2
  * Return: prime or not
  */
int find_prime(int n, int k)
{
	if (k > (n / 2))
		return (1);
	else if (!(n % k))
		return (0);
	else
		return (find_prime(n, k + 1));
}
/**
 * is_prime_number - fills memory
 * @n: data
 *
 * Return: char
 */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (find_prime(n, 2));
}
