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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (i = 0; i < size2; i++)
		s[size1 + i] = s2[i];
	s[(size1 + size2)] = '\0';
	return (s);
}
