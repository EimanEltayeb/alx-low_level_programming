#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	int i, b, x;
	unsigned int j;

	if (n == 0)
	{
		_putchar('0');
	}
	b = sizeof(unsigned long int) * 8;
	for (i = (b - 1); i >= 0; i--)
	{
		x = (n >> i) & 1;
		if (x)
		{
			break;
		}
	}
	for (j = i; j >= 0; j--)
	{
		 x = (n >> j) & 1;
		_putchar(x + '0');
	}
}
