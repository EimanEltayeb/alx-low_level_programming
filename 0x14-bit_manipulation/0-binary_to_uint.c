#include "main.h"
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


/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: number to be comverted
 * Return: the number in binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0;
	unsigned int base = 1;
	char *rev;

	if (b == NULL)
		return (0);
	rev = strdup(b);
	rev_string(rev);
	for (i = 0; rev[i] != '\0'; i++)
	{
		if  (rev[i] < 48 || rev[i] > 49)
			return (0);
		n = n + ((rev[i] - '0') * base);
		base *= 2;
	}
	return (n);
}
