#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_set - adds an element to the hash table.
  * @ht: hash_table
  * @key: key
  * @value: value
  * Return:  actual number of letters it could read and print
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *buf;

	if (!key)
		return (0);
	if (!ht)
		return  (0);
	index = key_index((unsigned char *) key, ht->size);
	if (!ht->array[index])
	{
		ht->array[index] = malloc(sizeof(hash_node_t *));
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = NULL;
	}
	else
	{
		temp = ht->array[index];
		do {
			if (!strcmp(temp->key, key))
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			if (temp->next)
				temp = temp->next;
		} while (temp->next);
		buf = malloc(sizeof(hash_node_t *));
		buf->key = strdup(key);
		buf->value = strdup(value);
		buf->next = ht->array[index];
		ht->array[index] = buf;
	}
	return (1);
}
