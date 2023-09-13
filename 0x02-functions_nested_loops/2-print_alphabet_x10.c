#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times.
 */
void print_alphabet_x10(void)
{
	int l = 0;

	while (l <= 9)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		l++;
	}

}
