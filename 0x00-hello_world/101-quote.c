#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return 1 (Success)
 */

int main(void)
	char art[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, art, strlen(art,sizeof(art)));
	return (1);
}
