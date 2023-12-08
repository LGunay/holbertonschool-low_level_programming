#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: pointer to node
 * @idx: val
 * @n: val
 * Return: number of nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *ptr2;
	unsigned int i = 0;

	ptr2 = *h;
	ptr = malloc(sizeof(dlistint_t));
	ptr->n = n;
	for (; i < idx; i++)
	{
		if (!ptr)
			return (NULL);

		ptr2 = ptr2->next;

	}
	ptr2->prev->next = ptr;
	ptr->next = ptr2;
	ptr->prev = ptr2->prev;
	ptr2->prev = ptr;
	return (ptr);
}
