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

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			pr = i * x;
			if (pr < 10)
			{
				_putchar(pr + '0');
				if (x != 9)
				{
					_putchar(',');
				}
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(pr / 10 + '0');
				_putchar(pr % 10 + '0');
				if (x != 9)
				{
					_putchar(',');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
