#include"main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input size
 */
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space <= (i); space++)
			{
				if (space < i)

					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
