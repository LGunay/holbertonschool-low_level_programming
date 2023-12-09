#include <string.h>
/**
  * binary_to_uint - binary to unsigned int convertor
  * @b: binary data
  * Return: unsigned integer if sucess if not 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len, i = 0;

	if (!b)
		return (0);
	len = strlen(b);
	while (b[i])
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		res += (b[i] - '0') << (len - i - 1);
		i++;
	}
	return (res);
}	
