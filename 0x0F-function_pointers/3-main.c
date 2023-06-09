#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks the code
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a;
		int b;
		int (*func_ptr)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		func_ptr = get_op_func(argv[2]);

		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		printf("%d\n", func_ptr(a, b));
		return (0);
	}
	printf("Error\n");
	exit(EXIT_FAILURE);
}
