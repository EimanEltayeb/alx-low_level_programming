#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s1[] = "Wolsd!";
	char s2[] = "Wosljhjhhjbh!";

    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", strcmp(s2, s1));
    printf("%d\n", strcmp(s1, s1));
    return (0);
}

