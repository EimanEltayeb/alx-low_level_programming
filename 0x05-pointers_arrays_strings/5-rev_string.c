#include"main.h"
/**
 * rev_string - function that reverses a string.
 * @s: the string
 */
void rev_string(char *s)
{
	int size = 0;
	int i;
	char *str;

	while (s[size] != 0)
		size++;
	for (i = 0; i < size; i++)
	{
		str = &s[i];
	}

	for (i = 0; i < size; i++)
	{
		*(str + i) = s[i];
		printf("%c", s[i]);
	}
	printf("\n");
}
