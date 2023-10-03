#include "main.h"
/**
 *_strstr -  a function to locate a substring
 *@needle: input
 *@haystack: input
 *Return: pointer or Null.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i + j] || needle[j] == '\0'; j++)
		{
			if (needle[j] == '\0')
			{
				p = &(haystack[i]);
				return (p);
			}
		}
	}
	return ('\0');
}
