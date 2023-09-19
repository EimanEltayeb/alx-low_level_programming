#include"main.h"
/**
 *puts_half - function that prints half of a string
 *@str: input string
 */
void puts_half(char *str)
{
	int size = 0;
	int i, n;

	{
	while (str[size] != 0)
		size++;
	if (size % 2 == 0)
		n = size / 2;
	else
		n = (size - 1) / 2;
	for (i = (size - n); i < size; i++)
		putchar(str[i]);
	}
	_putchar('\n');
}
