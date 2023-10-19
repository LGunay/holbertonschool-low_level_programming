#include "main.h"
/**
 * _isdigit - Entry point
 *@c:var
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
