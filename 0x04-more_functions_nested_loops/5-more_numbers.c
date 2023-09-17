#include"main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14*
 */
void more_numbers(void)
{
	int i = 1;
	int j, k;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			_putchar(1 + '0');
			k = j % 10;
			_putchar(k % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
