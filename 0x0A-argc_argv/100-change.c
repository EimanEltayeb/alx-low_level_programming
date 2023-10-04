#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *@argc: num of arguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char * argv[])
{
	int cents = atoi(argv[1]);
	int num = 0, change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
		printf("0\n");
	else
	{
		num += cents / 25;
		change = cents % 25;
		num += change / 10;
		change = change % 10;
		num += change / 5;
		change = cents % 5;
       		num += change / 2;
        	change = change % 2;
		num += change;
	}
	printf("%d\n", num);
	return (0);
}
