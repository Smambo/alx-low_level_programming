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

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if ((m % 10) > (n % 10))
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				if (n != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
