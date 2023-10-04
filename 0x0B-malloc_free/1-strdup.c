#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input string
 * Return: str or NUL
 */
char *_strdup(char *str)
{
	char *s;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	s = malloc(sizeof(char) * (size + 1));
	s = str;
	if (s == NULL)
		return (NULL);
	return (s);
}
