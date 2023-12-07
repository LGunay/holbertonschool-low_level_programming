#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to node
 * @index: val
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	if (!temp)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
