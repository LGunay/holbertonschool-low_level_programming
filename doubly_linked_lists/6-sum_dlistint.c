#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: var
 *
 * Return: Always 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *qwert;
	int sum = 0;

	qwert = head;
	if (!qwert)
		return (0);
	while (qwert)
	{
		sum += qwert->n;
		qwert = qwert->next;
	}
	return(sum);
}
