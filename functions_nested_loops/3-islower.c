#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: variable
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c > 122 || c < 97)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
