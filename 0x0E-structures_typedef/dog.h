#include <stdlib.h>
#include "dog.h"

/**
 * init_dog- Entry point
 * Description: function
 * @d: Input variable
 * @name: input variable 2
 * @age: input variable 3
 * @owner: input variable 4
 * Return: variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
