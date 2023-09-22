#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase.
 * @s: input string
 * Return: s output string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] = s[i] - 32;
	}
	return (s);
}
