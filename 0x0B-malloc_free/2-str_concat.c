#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, size1, size2;

	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;

	s = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s == NULL)
		return (null);
	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (i = (size1 + 1); i < (size1 + size2 + 1); i++)
		s[i] = s2[i - size1 - 1];
	return (s);
}
