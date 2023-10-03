#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: first string
 * @src: seconf string
 * @n: number of chars of src to be linked
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dsize = 0;
	int ssize = 0;
	int i;

	while (dest[dsize] != 0)
		dsize++;
	while (src[ssize] != 0)
		ssize++;

	for (i = dsize; i < (dsize + n); i++)
	{
		dest[i] = src[i - dsize];
		if (src[i - dsize] == '\0')
			break;
	}
	return (dest);
}
