#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: string or NULL
 */
char *str_concat(char *s1, char *s2)
{
    char *s_new, *s;
    int i, size1 = 0, size2 = 0;

    // Calculate size1
    for (i = 0; s1[i] != '\0'; i++)
        size1++;

    // Calculate size2
    for (i = 0; s2[i] != '\0'; i++)
        size2++;

    // Allocate memory for s_new
    s_new = malloc(sizeof(char) * (size1 + size2 + 1));

    if (s_new == NULL)
        return (NULL);

    // Copy s1 to s_new
    for (i = 0; s1[i] != '\0'; i++)
        s_new[i] = s1[i];

    // Concatenate s2 to s_new
    for (i = 0; s2[i] != '\0'; i++)
        s_new[size1 + i] = s2[i];

    s_new[size1 + size2] = '\0'; // Null-terminate the string

    return s_new;
}
