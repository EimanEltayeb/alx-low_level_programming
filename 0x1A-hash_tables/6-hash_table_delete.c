#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp1, *temp2;

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
