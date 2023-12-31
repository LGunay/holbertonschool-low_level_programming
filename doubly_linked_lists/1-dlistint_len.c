#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * dlistint_len - the function that finds length of doubly linked list.
 *
 * @h: given doubly linked list
 *
 * Return: the length of double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
