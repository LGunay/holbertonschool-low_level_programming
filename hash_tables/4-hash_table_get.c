#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_get - adds an element to the hash table.
  * @ht: hash_table
  * @key: key
  * Return:  actual number of letters it could read and print
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!key)
		return (NULL);
	if (!ht)
		return  (NULL);
	index = key_index((unsigned char *) key, ht->size);
	temp = ht->array[index];
	if (!temp)
		return (NULL);
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
