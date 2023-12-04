#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
  * add_node - lala
  *
  * @str: list
  * @head: pointer
  * Return:the number of nodes
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
