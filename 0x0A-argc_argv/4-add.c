#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * numeric - checks if string is a number
 *
 * @s: string to be checked
 *
 * Return: 1 if true, 0 otherwise
 */
int numeric(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (Succes)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (numeric(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
