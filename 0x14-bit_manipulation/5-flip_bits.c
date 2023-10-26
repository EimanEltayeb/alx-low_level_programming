#include "main.h"
/**
 * flip_bits - returns bits needed to flip to get other num
 * @n: number
 * @m: the other num.
 * @Return: bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, count;

	x = n ^ m;
	b = sizeof(unsigned long int) * 8;
	for (i = (b - 1); i >= 0; i--)
	{
		num = (x >> i) & 1;
		if (num == 1)
			count++;
	}
	return (count);
}
