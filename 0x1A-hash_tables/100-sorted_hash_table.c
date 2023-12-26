#include "hash_tables.h"
/**
 * 
*/
shash_table_t *shash_table_create(unsigned long int size)
{
		shash_table_t *h_table;
	unsigned long int i;

	h_table = malloc(sizeof(shash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(sizeof(shash_node_t *) * size);
	if (h_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		h_table->array[i] = NULL;
	}
	return (h_table);
}

/**
 * 
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *temp, *new, *temp2;

	if (ht == NULL || key == NULL)
		return (0);
	/* heeeeere comes an edit*/
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(shash_node_t));
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
				return (1);
			}
			if (temp->next == NULL)
				break;
			temp = temp->next;
		}
		temp = ht->array[index];
		if (strcmp(key, temp->key) > 0)
		{
			new->next = ht->array[index];
			ht->array[index] = new;
			return (1);
		}
		temp2 = temp;
		temp = temp->next;
		while (temp != NULL)
		{
			if (strcmp(key, temp->key) < 0)
			{
				temp2 = temp;
				temp = temp->next;
				continue;
			}
			else
			{
				new->next = temp;
				temp2->next = new;
				break;
			}
		}

	}
	return (1); 
}


/**
 * 
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

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

/**
 * 
*/
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *temp;
	int check = 0;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			temp = ht->array[index];
			while (temp)
			{
				if (check == 0)
					check = 1;
				else
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}


/**
 * 
*/
/*void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *temp;
	int check = 0;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			temp = ht->array[index];
			while (temp)
			{
				if (check == 0)
					check = 1;
				else
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}





	if (temp != NULL)
		print_nod_rev(xxx)
	printf(*****)
}*/

/**
 * 
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *temp1, *temp2;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] == NULL)
				continue;
			temp1 = ht->array[index];
			while (temp1)
			{
				temp2 = temp1->next;
				if (temp1->key != NULL)
					free(temp1->key);
				if (temp1->value != NULL)
					free(temp1->value);
				if (temp1 != NULL)
					free(temp1);
				temp1 = temp2;
			}
		}
	}
	free(ht->array);
	free(ht);
}
