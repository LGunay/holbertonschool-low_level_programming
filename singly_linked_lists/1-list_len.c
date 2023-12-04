#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - lala
  *
  * @h: list
  * Return:the number of nodes
  */
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
