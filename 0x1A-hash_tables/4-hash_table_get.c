#include "hash_tables.h"
/**
 * hash_table_get - return a value associeated with key
 * @ht: hash table
 * @key: the key to be compared
 * Return: the value or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		return (temp->value);
	}
	return (NULL);
}
