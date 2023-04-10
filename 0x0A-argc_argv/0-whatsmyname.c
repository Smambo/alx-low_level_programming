#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - print program name
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (Succes)
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
