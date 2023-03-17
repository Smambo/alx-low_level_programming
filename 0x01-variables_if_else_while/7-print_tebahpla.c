#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar('z' - a);
	}
	putchar('\n');
	return (0);
}
