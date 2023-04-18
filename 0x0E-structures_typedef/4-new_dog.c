#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog function
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog object, otherwise NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_name = 0, len_own = 0;
	char *ptr_n, *ptr_o;
	dog_t *ptr;

	for (i = 0; name[i] != '\0'; i++)
	{
		len_name++;
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		len_own++;
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr_n = malloc(sizeof(char) * (len_name + 1));
	if (ptr_n == NULL)
		free(ptr);
		return (NULL);
	ptr_o = malloc(sizeof(char) * (len_own + 1));
	if (ptr_o == NULL)
		free(ptr_n);
		free(ptr);
		return (NULL);
	for (i = 0; i < len_name; i++)
	{
		ptr_n[i] = name[i];
	}
	ptr_n[i] = '\0';
	ptr->name = ptr_n;
	ptr->age = age;

	for (i = 0; i < len_own; i++)
	{
		ptr_o[i] = owner[i];
	}
	ptr_o[i] = '\0';
	ptr->owner = ptr_o;
	return (ptr);
}
