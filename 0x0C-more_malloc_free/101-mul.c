#include "main.h"
/**
 * _strlen - a function to find the lengh of string
 * @ptr: the string
 * Return: size of string
 */
int _strlen(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
		i++;
	return (i);
}
#include "main.h"
/**
 * main - a function to multiply two positive numbers
 * @argc: num of arguments
 * @argv: the arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, size1, size2,
	char *s1, *s2, *result,

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	s1 = argv[1];
	s2 = argv[2];
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	for (i = 0; i < size1; i++)
	{
		if (s1[i] < 48 || s1[i] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < size2; i++)
	{
		if (s1[i] < 48 || s1[i] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}
	retult = malloc((size1 + size2 + 1) * sizeof(char));
	for (i = 0; i <= (size1 + size2); i++)
		result[i] = 0;
	/* converting char nums to int*/
	for (i = 0; i < size1; i++)
		s1[i] = s1[i] - '0';
	for (i = 0; i < size2; i++)
		s2[i] = s2[i] - '0';
	return (0);
}
