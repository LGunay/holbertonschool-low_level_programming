#include <unistd.h>
/**
  * _putchar - other putchar
  * @c: character for print
  * Return: 1 if success if not 0
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
