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

	s = malloc(sizeof(char) * (size1 + size2 - 1));
	if (s == NULL)
		return (NULL);
	*s = *s1;
	while (*s1 != '\0')
		s++;
	while (*s2 != '\0')
	{
		*s = *s2;
		s++;
		s2++;
	}
	return (s);
}
