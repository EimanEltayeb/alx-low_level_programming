#include"main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14*
 */
void more_numbers(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
