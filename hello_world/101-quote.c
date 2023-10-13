#include<stdio.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int n = strlen(txt);
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(txt[i]);
	}
	return (1);
}
