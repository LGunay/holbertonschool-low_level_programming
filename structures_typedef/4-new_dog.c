#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - check the code
 * @name:name
 * @age:age
 * @owner:owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int sizen, sizeo, i;
	dog_t *dog4;

	sizen = strlen(name);
	sizeo = strlen(owner);
	dog4 = malloc(sizeof(dog_t));
	if (dog4 == NULL)
	{
		free(dog4);
		return (NULL);
	}
	dog4->name = malloc(sizeof(char) * sizen + 1);
	dog4->owner = malloc(sizeof(char) * sizeo + 1);
	dog4->age = age;
	if (dog4->name == NULL)
	{
		free(dog4->name);
		free(dog4->owner);
		free(dog4);
		return (NULL);
	}
	for (i = 0; i < sizen; i++)
	{
		dog4->name[i] = name[i];
	}
	dog4->name[i] = '\0';
	if (dog4->owner == 0)
	{
		free(dog4->owner);
		free(dog4->name);
		free(dog4);
		return (NULL);
	}
	for (i = 0; i < sizeo; i++)
	{
		dog4->owner[i] = owner[i];
	}
	dog4->owner[i] = '\0';
	return (dog4);
}
