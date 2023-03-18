#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int p;
	int q;

	for (p = 0; p <= 99; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			if (p != 98 || q != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
