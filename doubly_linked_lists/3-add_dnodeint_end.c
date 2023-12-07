#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_dnodeint_end - adds new node at the end.
 *
 * @head: initial linked list.
 *
 * @n: the integer value of new node.
 *
 * Return: modified linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *temp2;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	temp2 = *head;
		while (temp2->next)
		{

			temp2 = temp2->next;
		}
		temp2->next = temp;
		temp->prev = temp2;
	return (temp);
}
