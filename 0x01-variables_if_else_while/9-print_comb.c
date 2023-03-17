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

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
		if (n != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
