#include "main.h"

/**
 * times_table - a function to print tables of products
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int x;
	int pr;

	for (i = 0; i <= 0; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			pr = i * x;
			_putchar(pr + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
