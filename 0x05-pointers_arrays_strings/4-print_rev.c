#include"main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	char x;
	int size = 0;

	while (s[size] != 0)
		size++;
	for (i = (size - 2); i >= 0; i--)
		printf("%c\n", s[i]);
}
