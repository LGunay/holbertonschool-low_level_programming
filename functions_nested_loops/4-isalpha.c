#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: variable
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((64 < c && c < 91) || (96 < c && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
