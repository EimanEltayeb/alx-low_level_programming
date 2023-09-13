#include"main.h"

/**
 * main - Entry point
 *
 * Description: a program to print text
 *
 * Return: 0
 */

int main(void)
{
	char sen[] = "_putchar";
	int c;

	for (c = 0 ; c < 8 ; c++)
	_putchar(sen[c]);
	_putchar('\n');

	return (0);
}
