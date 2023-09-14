#include"main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of time _ is printed
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n > 0)
		_putchar('_');
	}

	_putchar('\n');
}
