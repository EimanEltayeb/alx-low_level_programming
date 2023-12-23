#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
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
				if (temp->key != NULL && temp->value != NULL)
					printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
