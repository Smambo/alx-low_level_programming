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
	int m;

	for (n = 0; n < 100; n++)
	{
		putchar((n % 100) + '0');
		if (n != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
