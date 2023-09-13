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
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
		}
	}

}
