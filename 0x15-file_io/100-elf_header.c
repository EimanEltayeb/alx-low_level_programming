#include "main.h"
/**
 * * main - maint function
 * @argc: num of arguments
 * @argv: the arguments
 * Return: 0
*/
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	while (!1)
	{
		write(2, "ERROR", 5);
		exit(98);
	}
	return (0);
}
