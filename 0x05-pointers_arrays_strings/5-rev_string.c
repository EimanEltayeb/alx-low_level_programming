#include"main.h"
/**
 * rev_string - function that reverses a string.
 * @s: the string
 */
void rev_string(char *s)
{
	int size = 0;
	int i;
	char x;

	while (s[size] != 0)
		size++;
	for (i = 0; i < (size / 2); i++)
	{
		x = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = x;
	}
}
