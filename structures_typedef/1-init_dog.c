#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - check the code
 * @d: pointer
 * @name: var
 * @age: var
 * @owner: var
 *  Description: Longer descriptioon
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
