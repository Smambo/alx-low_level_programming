#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int bytes = atoi(argv[1]);
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)&main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i] & 0xff);
	}
	printf("\n");
	return (0);
}
