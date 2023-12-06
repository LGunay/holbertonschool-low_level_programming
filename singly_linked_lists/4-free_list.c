#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
  * free_list - lala
  *
  *
  * @head: pointer
  * Return:the number of nodes
  */
void free_list(list_t *head)
{
	list_t *otherwomen;

	while (head)
	{
		otherwomen = head;
		head = head->next;
		free(otherwomen->str);
		free(otherwomen);
	}
}
