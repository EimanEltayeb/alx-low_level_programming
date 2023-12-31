#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int n2 = n;
	unsigned int x;
	int i = 0;

	if (n == 0)
		_putchar(48);
	while (n2 != 0)
	{
		n2 = n2 >> 1;
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		x = (n >> i) & 1;
		_putchar(x + '0');
	}
}
