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
	unsigned long int index;
	hash_node_t *temp, *new;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0); }
	if (value != NULL)
	{
		new->value = strdup(value);
		if (new->value == NULL)
		{
			free(new->key);
			free(new);
			return (0); } }
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new->key);
				free(new->value);
				free(new);
				return (1); }
			if (temp->next == NULL)
				break;
			temp = temp->next; }
		temp = ht->array[index];
		new->next = ht->array[index];
		ht->array[index] = new; }
	return (1); }
