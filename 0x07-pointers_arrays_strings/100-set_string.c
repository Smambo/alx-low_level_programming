#include "main.h"
/**
 * set_string - sets value of a pointer to a char
 * @s: string to be set
 * @to: string from which value will be set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
