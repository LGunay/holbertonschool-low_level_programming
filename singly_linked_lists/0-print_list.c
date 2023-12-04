#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - lala
  *
  * @h: list
  * Return:the number of nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0;h != NULL; i++)
	{
		if (h -> str == NULL)
			printf ("[0] (nil)\n");
		else
			printf ("[%d] %s\n", h -> len, h -> str);
		h = h -> next;
	}
	return (i);
}
