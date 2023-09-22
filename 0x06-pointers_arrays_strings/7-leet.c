#include "main.h"
/**
 * char *leet - function that encodes a string into 1337.
 * @s: input string
 * Return: s (output string)
 */
char *leet(char *s)
{
	int i;
	int j;
	char l[10], n[10];

	l[0] = 'a';
	l[1] = 'A';
	l[2] = 'e';
	l[3] = 'E';
	l[4] = 'o';
	l[5] = 'O';
	l[6] = 't';
	l[7] = 'T';
	l[8] = 'l';
	l[9] = 'L';
	n[0] = '4';
	n[1] = '4';
	n[2] = '3';
	n[3] = '3';
	n[4] = '0';
	n[5] = '0';
	n[6] = '7';
	n[7] = '7';
	n[8] = '1';
	n[9] = '1';
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
	}
	return (s);
}
