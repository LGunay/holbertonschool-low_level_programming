#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * 1_init_dog - check the code
 * @d: pointer
 * @name: var
 * @age: var
 * @owner: var
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner =owner;
}
