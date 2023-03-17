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
	int r;

	for (p = 0; p < 10; p++)
	{
		for (q = 0; q < 10; q++)
		{
			for (r = 0; r < 10; r++)
			{
				if (r > q && q  > p)
				{
					putchar((p % 10) + '0');
					putchar((q % 10) + '0');
					putchar((r % 10) + '0');
					if (p != 7 || q != 8 || r != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
