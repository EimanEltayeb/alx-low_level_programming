#include "main.h"

/**
 * print_binary - prints a number in binary
 * @n: number to be printed
 *
 * Return: number of digits
 */

int print_binary(unsigned int n)
{
	int count = 0;

	if (n != 0)
	{
		count = print_binary(n / 2);
		if (n % 2 == 0)
		{
			write_char(0 + '0');
		}
		else
		{
			write_char(1 + '0');
		}
		count++;
	}
	return (count);
}

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to be edited
 * @index: index of edit postition
 * Return: edited number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int base = 1;

	if (b == NULL)
		return (-1);
	while (b[i + 1] != '\0')
		i++;
	for (; i >= 0; i--)
	{
		if (b[i] < 48 || b[i] > 49)
			return (-1);
		if (i == index)
			b[i] = '0';
		n = n + ((b[i] - '0') * base);
		base *= 2;
	}
	return (n);
}
