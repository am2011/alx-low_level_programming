#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *st;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(arguments, char*);
		if (st == NULL)
			printf("(nil)");
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", st, separator);
			else
				printf("%s", st);
		}
	}
	va_end(arguments);
	printf("\n");
}
