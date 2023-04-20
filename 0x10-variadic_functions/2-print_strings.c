#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);

		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		if (ptr == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", ptr);
		}
	}
	va_end(ap);
	printf("\n");
}
