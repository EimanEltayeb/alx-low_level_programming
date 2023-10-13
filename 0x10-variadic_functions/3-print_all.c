#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: format
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	int x;
	char ch;
	float fl;
	char * str;

	va_list args;
	va_start (args, format);

	while(
