#include "main.h"
/**
 * string_nconcat - a function to concatenates two strings.
 * @s1: input
 * @s2: input
 * @n: input
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, size1 = 0, size2 = 0, n2;

	if (s1 == NULL)
	{
		*s1 = '\0';
		size1 = 1;
	}
	if (s2 == NULL)
	{
		*s2 = '\0';
		size2 = 1;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
		for (i = 0; s2[i] != '\0'; i++)
			size2++;
	}
	if (n >= size2)
		n2 = size2;
	else
		n2 = n;
	s = malloc((size1 + n2 + 1) * (sizeof(char)));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (i = size1, j = 0; i < (size1 + n2); i++, j++)
		s[i] = s2[j];
	s[(size1 - 1 + n2)] = '\0';
	return (s);
}
