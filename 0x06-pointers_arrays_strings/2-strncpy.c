#include "main.h"
/**
 * char *_strncpy - a function to copy a string
 * @dest: destination string.
 * @src: source string.
 * @n: number of char to copy.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n && i == '\0')
		dest[i] = src[i];
	return (dest);
}
