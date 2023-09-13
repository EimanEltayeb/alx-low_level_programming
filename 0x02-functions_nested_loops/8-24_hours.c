#include "main.h"

/**
 * jack_bauer - printt every minuets of the day
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i;
	int m;

	for (i = 0; i <= 23; i++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (i <= 9)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			_putchar(':');

			if (m <= 9)
			{
				_putchar('0');
				_putchar(m + '0');
			}
			else
			{
				_putchar(m + '0');
			}

			_putchar('\n');
		}
	}

}
