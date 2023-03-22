#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 4000000;
	int t1 = 0, t2 = 1, nextTerm = 0, sum = 0;

	while (nextTerm <= n)
	{
		if (nextTerm % 2 == 0)
		{
			sum += nextTerm;
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%d\n", sum);
	return (0);
}
