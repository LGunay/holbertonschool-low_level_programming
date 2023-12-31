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
	if (!ptr)
		return (NULL);
	ptr->n = n;
	if (!idx && !*h)
	{
		ptr->next = NULL;
		ptr->prev = NULL;
		*h = ptr;
		return (*h);
	}
	else if (!idx)
	{
		(*h)->prev = ptr;
		ptr->next = *h;
		*h = ptr;
		return (*h);
	}
	for (; i < idx; i++)
	{
		ptr2 = ptr2->next;
		if (!ptr2 && i == idx - 1)
			return (add_dnodeint_end(h, n));
		else if (!ptr2)
			return (NULL);
	}
	ptr2->prev->next = ptr;
	ptr->next = ptr2;
	ptr->prev = ptr2->prev;
	ptr2->prev = ptr;
	return (ptr);
}
