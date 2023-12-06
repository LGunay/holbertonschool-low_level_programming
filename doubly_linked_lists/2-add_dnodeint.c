#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - the function adds new node at the beginning.
 *
 * @head: initial double linked list.
 *
 * @n: the integer value of the new node.
 *
 * Return: modified linked list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	temp = malloc(sizeof(dlistint_t));

	if(!temp)
		return(NULL);
	temp->n = n;
	if (*head)
		(*head)->prev = temp;
	temp->prev = NULL;
	temp->next = *head;
	*head = temp;
	return (temp);
}
