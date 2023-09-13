#include "main.h"

/**
 *print_times_table - a function to print tables of products
 *@n: input size of the table
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i;
	int x;
	int pr;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
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
				}
			}
			_putchar('\n');
		}
	}
}
