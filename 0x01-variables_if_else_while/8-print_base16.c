#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int n;
	char a;

	for (n = 0; n < 16; n++)
	{
		putchar('0' + n);
	} for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
