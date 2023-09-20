#include "main.h"
/**
 * char *_strcat - a function to concantenates two strings.
 * @dest: first string
 * @src: second string
 * Return: linked string
 */
char *_strcat(char *dest, char *src)
{
	int dsize = 0;
	int ssize = 0;
	int i, j;
	char *link;

	while (dest[dsize] != 0)
		dsize++;
	while (src[ssize] != 0)
		ssize++;
	for (i = 0; i < (ssize - 1); i++)
	{
		*(link + i) = *(dest + i);
	}
	for (j = 0; j < ssize; j++)
	{
		*(link + (dsize - 2) + j) = *(src + j);
	}
	return (*link);
}
