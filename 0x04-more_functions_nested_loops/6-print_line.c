#include"main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of time _ is printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{ i = 1;
		while (i <= n)
		{
		_putchar('_');
		i++;
		}
	_putchar('\n');
	}
}
