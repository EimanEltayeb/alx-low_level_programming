#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: the key
 * @size: size of the array
 * Return: key_index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	x = hash_djb2(key);
	return (x % size);
}
