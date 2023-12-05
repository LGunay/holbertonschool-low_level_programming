#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
  * add_node_end - lala
  *
  * @str: list
  * @head: pointer
  * Return:the number of nodes
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *temp;
	list_t *temp2;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	temp2 = *head;
	if (temp2)
	{
		for (i = 0; temp2->next; i++)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
