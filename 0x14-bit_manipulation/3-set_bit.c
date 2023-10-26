#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: the index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (!n)
		return (-1);
	x = 1;
	x = x << index;
	if (x > *n)
		return (-1);
	*n = *n | x;
	if (!n)
		return (-1);
	return (1);
}

