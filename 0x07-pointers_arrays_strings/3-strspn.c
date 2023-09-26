#include "main.h"
/**
 * _strspn - a function to give the length of a prefix substring
 * @s: input string
 * @accept: input
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count += 1;
			}
		}
	}
	return (count);
}
