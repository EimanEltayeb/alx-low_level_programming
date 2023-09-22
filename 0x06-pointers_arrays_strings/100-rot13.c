#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @s: input string
 * Return: s string
 */
char *rot13(char *s)
{
	int i, j;
	char rot1[], rot2[];

	rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == rot1[j])
				s[i] = rot2[j];
		}
	}
	return (s);
}
