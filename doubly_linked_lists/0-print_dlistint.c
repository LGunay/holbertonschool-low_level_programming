#include <sstdio.h>
#include "lists.h"

/**
 * print_dlistint - the function that prints all nodes
 *
 * @h: given doubly linked list
 *
 * Return: the length of double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
