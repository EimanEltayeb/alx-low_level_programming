#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;
	int x, i;

	b  = sizeof(unsigned long int) * 8;
	for (i = (b - 1); i >= 0; i--)
	{
		x = (n >> i) & 1;
		if ((unsigned int)i == index)
			return (x);
	}
	return (-1);
}
