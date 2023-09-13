#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times.
 */
void print_alphabet_x10(void)
{
	int l;
	int x;

	for (l = 1 ; l < 11 ; l++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}

