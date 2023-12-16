#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_print - retrieves a value associated with a key.
  * @ht: hash_table
  * Return:  actual number of letters it could read and print
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, len;

	if (!ht)
		return;
	len = ht->size;
	printf("{");
	for (i = 0; i < len; i++)
	{
		if (ht->array[i])
		{
			if (i != 0 && i != len - 1)
				printf(", ");
			printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}");
	printf("\n");
}