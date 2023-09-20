#include"main.h"
/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: buffer pointer
 * @src: input string
 * Return: dest[]
 */
char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i;

	while (src[size] != 0)
		size++;
	for (i = 0; i <= size; i++)
		dest[i] = src[i];
	return (dest);
}
