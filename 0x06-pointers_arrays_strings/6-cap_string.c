#include "main.h"
/**
 * char *cap_string - a function that capitalizes all words of a string.
 * @s: input string.
 * Return: s, output string.
 */
char *cap_string(char *s)
{
	int i;

	int size;

	while (s[size] != 0)
		size++;
	for (i = 0; i < size; i++)
	{
		if ((i == 0 || s[i - 1] == ' ') && (s[i] <= 'z' && s[i] >= 'a'))
			s[i] = s[i] - 32;
	}
	return (s);
}
