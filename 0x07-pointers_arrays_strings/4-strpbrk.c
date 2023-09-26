#include "main.h"
/**
 * _strpbrk - a function to search a string for any sets of bytes
 * @s: input string
 * @accept: input string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == s[i])
				p = &(s[i]);
		}
	}
	return (p);
}
