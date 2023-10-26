#include "main.h"
/**
 * flip_bits - returns bits needed to flip to get other num
 * @n: number
 * @m: the other num.
 * Return: bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x, num;

	x = n ^ m;
	while (x != 0)
	{
		num = x & 1;
		if (num == 1)
			count++;
		x = x >> 1;
	}
	return (count);
}
