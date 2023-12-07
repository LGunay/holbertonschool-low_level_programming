#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: var
 *
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *point;

	while (head)
	{
		point = head;
		head = head->next;
	}
	free (point);
}	
