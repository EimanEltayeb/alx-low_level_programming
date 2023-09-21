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
	int i;

	while (dest[dsize] != 0)
		dsize++;
	while (src[ssize] != 0)
		ssize++;


	for (i = dsize; i < (dsize + ssize + 1); i++)
		dest[i] = src[i- dsize];
	return (dest);
}
