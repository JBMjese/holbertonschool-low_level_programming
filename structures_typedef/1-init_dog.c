#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * init dog - initialize a variable of dog
  * @d:variable
  * @dog :variable
  * @name: name
  * @age: age
  * @owner: owner name
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
