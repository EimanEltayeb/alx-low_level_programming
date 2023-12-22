#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t **h_table;

	h_table = malloc(sizeof(hash_table_t*) * size);
	if (h_table == NULL)
		return (NULL);

	h_table = NULL;
	
	return (*h_table);
}