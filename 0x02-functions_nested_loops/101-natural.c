#include <stdio.h>
/**
 * main - print sum of multiples of 3 and 5 below 1024
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int sum = 0;
	int m;

	for (m = 0; m < 1024; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			sum += m;
		}
	}
	printf("%d\n", sum);
	return (0);
}
