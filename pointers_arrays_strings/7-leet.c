#include "main.h"
#include <string.h>
/**
  * leet - reset to 98
  *
  * @s: str
  * Return: length
 */

char *leet(char *s)
{
	int i = 0, temp;
	char h[20];

	h[0] = '4';
	h[4] = '3';
	h[11] = '1';
	h[14] = '0';
	h[19] = '7';

	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o'
				|| s[i] == 'O' || s[i] == 'T' || s[i] == 't' || s[i] == 'L' || s[i] == 'l')
		{
			for (; s[i] > 90;)
			{
				s[i] -= 32;
			}
			temp = s[i] - 65;
			s[i] = h[temp];
		}
		i++;
	}
	return (s);
}
