#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase.
 * @s: input string
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;
	int size;

	while (s[size] != 0)
		size++;
	for (i = 0; i < (size - 1); i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] = s[i] - 32;
	}
	return (s);
}
