#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_c - prints char
 * @a: argument list
 * Return: 0 (Success)
 */
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}
/**
 * print_i - prints integer
 * @a: argument list
 * Return: 0 (Success)
 */
int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}
/**
 * print_f - prints float
 * @a: argument list
 * Return: 0 (Success)
 */
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}
/**
 * print_s - prints string
 * @a: argument list
 * Return: 0 (Success)
 */
int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}
/**
 * print_all - prints all types
 *
 * @format: list of parameter types
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator1 = "";
	char *separator2 = ", ";

	va_list ap;

	print ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format != NULL && format[i])
	{
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", separator1);
				ops[j].f(ap);
			}
			j++;
		}
		separator1 = separator2;
		i++;
	}
	printf("\n");
	va_end(ap);
}
