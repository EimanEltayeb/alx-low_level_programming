#include"main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: input number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			n++;
		}
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			 _putchar(n);
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			n--;
		}
	}
}
