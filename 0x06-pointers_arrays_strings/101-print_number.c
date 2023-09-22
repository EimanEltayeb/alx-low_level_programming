#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: input integer
 */
void print_number(int n)
{
	unsigned int x = n;
	if (n < 0)
	{
		x = n * -1;
		_putchar('-');
	}
	x /= 10;
	if (x != 0)
		print_number(x);
	_putchar((unsigned int) n % 10 + '0');
}
