#include "main.h"
/**
 * _atoi - converts str to int
 * @s: str
 *
 * Return: return
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			sign *= 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + s[i] - '0';
		}
		else if (num > 0)
		{
			break;
		}

		i++;

	}
	return (num * sign);
}
