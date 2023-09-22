#include "main.h"
/**
 * char *cap_string - a function that capitalizes all words of a string.
 * @s: input string.
 * Return: s, output string.
 */
char *cap_string(char *s)
{
	int i, j;
	char x[13];
	int size;

	x[0] = ' ';
	x[1] = '\n';
	x[2] = ',';
	x[3] = ';';
	x[4] = '.';
	x[5] = '!';
	x[6] = '?';
	x[7] = '"';
	x[8] = '(';
	x[9] = ')';
	x[10] = '{';
	x[11] = '}';
	x[12] = '\t';

	while (s[size] != 0)
		size++;
	for (i = 0; i < size; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (i == 0 || s[i - 1] == x[j])
					s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
