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
			if (x == 0)
			{
				_putchar(pr + '0');
			}
			else
			{
				if (pr < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(pr + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(pr / 10 + '0');
					_putchar(pr % 10 + '0');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
