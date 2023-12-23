#include "hash_tables.h"
/**
 * hash_table_set - adds elements to the hash table
 * @ht: hash table
 * @key: the key
 * @value: the value
 * Return: 0 if failed or 1 if succeeded
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *temp, *new;


	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	printf("%lu\n", index);

	if (key == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
		new = ht->array[index];
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(key, temp->key) == 0)
			{
				temp->value = strdup(value);
				free(new->key);
				free(new->value);
				free(new);
				return (1);
			}
			if (temp->next == NULL)
				break;
			temp = temp->next;
		}
		temp->next = new;
	}
	return (1);
}
