#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{

	int change = 0;
	int money = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (money < 0)
		{
			printf("0\n");
		}
		while (money > 0)
		{
			if (money % 25 == 0)
			{
				money -= 25;
			} else if (money % 10 == 0)
			{
				money -= 10;
			} else if (money % 5 == 0)
			{
				money -= 5;
			} else if (money % 2 == 0)
			{
				money -= 2;
			} else
			{
				money -= 1;
			}
			change++;
		}
		printf("%d\n", change);
		return (0);

	}
}
