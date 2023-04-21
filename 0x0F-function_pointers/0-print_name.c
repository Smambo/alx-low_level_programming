#include "function_pointers.h"
#include <stdio.h>
#include <stddef>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointed to
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
