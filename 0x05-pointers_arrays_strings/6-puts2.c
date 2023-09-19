#include"main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int size = 0;
	int i;

	while (str[size] != 0)
		size++;
	for (i = 0; i < size; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
