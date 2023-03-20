#include <unistd.h>

/**
 * print_alphabet - does just that
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)

{
	char a;

	for  (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
