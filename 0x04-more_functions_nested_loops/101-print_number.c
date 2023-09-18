#include"main.h"
/**
 *print_number - prints an integer.
 *@n: input number
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		k = -1 * n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
