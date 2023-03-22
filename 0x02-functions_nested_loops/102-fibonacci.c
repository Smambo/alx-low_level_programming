#include <stdio.h>
/**
 * main -prints first 50 Fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n  = 50, t1 = 1, t2 = 2, i, nextSeq;

	for (i = 1; i <= n; i++)
	{
		printf("%d", t1);
		if (i != n)
		{
			printf(", ");
		}
		nextSeq = t1 + t2;
		t1 = t2;
		t2 = nextSeq;
	}
	printf("\n");
	return (0);
}
