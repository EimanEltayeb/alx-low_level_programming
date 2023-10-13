#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - prints anything
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int i, j = 0;
	char ch, x;
	float fl;
	char *str;
	va_list args;

	va_start(args, format);
	while (format[j] != '\0')
	{
		x = format[j];
		switch (x)
		{
			case ('c'):
				{
					ch = va_arg(args, int);
					printf("%c", ch);
					break;
				}
			case('i'):
				{
					i = va_arg(args, int);
					printf("%d", i);
					break;
				}
			case('f'):
				{
					fl = va_arg(args, double);
					printf("%f", fl);
					break;
				}
			case('s'):
				{
					str =  va_arg(args, char*);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				}
			default:
				break;
		}
		if (format[j + 1] != '\0' && ( x == 'c' || x == 'i' || x == 'f' || x == 's'))
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
