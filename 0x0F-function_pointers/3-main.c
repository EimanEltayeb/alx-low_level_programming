#include "3-calc.h"
/**
 * main - main function
 * @argc: n
 * @argv: n
 * Return: calc
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	else
		result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
