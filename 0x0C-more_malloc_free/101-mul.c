#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * mul - multiplies two positive  numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: product of two numbers
 */
long int mul(long int num1, long int num2)
{
	return (num1 * num2);
}

/**
 * num_verify - verifies if input string is number or not
 * str: input string
 * Return: 1 if str is a digit, otherwise 0.
 */
int num_verify(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - checks if number of arguments is correct
 * @argc: argument counter
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	char *ptr_num1 = argv[1];
	char *ptr_num2 = argv[2];
	long int num1 = atoi(ptr_num1);
	long int num2 = atoi(ptr_num2);
	long int prod = mul(num1, num2);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!num_verify(ptr_num1) || !num_verify(ptr_num2))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%ld\n", prod);
	return (0);
}
