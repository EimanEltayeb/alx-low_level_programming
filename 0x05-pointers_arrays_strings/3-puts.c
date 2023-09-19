#include"main.h"
/**
 * _puts - a function that prints a string
 * @str: input string pointer
 */
void _puts(char *str)
{
	int size = 0;
	int i;
	char c;

	while (str[size] != 0)
		size++;
	for (i = 0; i < (size - 1); i++)
	{
		c = str[i];
		_putchar(c);
	}
}
