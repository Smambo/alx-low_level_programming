#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: reverse string
 */
void rev_string(char *s)
{
	int len = 0, i;
	char *begin_ptr = s, *end_ptr = s, temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	end_ptr = s - 1;

	for (i = 0; i < (len / 2); i++)
	{
		temp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = temp;

		begin_ptr++;
		end_ptr--;
	}
}
