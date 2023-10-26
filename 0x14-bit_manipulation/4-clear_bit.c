#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: the index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	x = 1;
	x = x << index;
	x = ~x;
	*n = *n & x;
	return (1);
}

