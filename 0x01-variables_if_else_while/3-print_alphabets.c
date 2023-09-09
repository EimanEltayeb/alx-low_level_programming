#include<stdio.h>

/*
 * main = Entry function
 * Return = 0
 */
int main(void)
{
	char Alpha = "a";
	char Alphabit = "A";

	while (Alpha <= "z")
	{
		putchar(Alpha);
		Alpha++;
	}

	while (Alphabit <= "Z")
	{
		putchar(Alphabit);
		Alphabit++;
	}

	putchar('\n');

	return (0);
}
