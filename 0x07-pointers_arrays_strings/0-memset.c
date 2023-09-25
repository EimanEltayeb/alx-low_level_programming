#include "main.h"
/**
 * _memset - a function to fill the memory with a constant byte.
 * @s: input
 * @b: input
 * @n: input
 * return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
