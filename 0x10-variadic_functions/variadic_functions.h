#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - 
 * @c:
 * @f:
 */
typedef struct op
{
	char *c;
	int (*f)(va_list a);
} print;

int print_c(va_list a);
int print_i(va_list a);
int print_f(va_list a);
int print_s(va_list a);
#endif /* VARIADIC_FUNCTIONS_H */
