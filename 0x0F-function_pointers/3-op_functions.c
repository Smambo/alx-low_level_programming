#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two integers together
 * @a: first integer
 * @b: second integer
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction between two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division between two integers
 * @a: first integer
 * @b: second integer
 * Return: quotient of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division of two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
