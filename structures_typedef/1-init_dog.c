#include <stdio.h>
#include <stdlib.h>

/**
  * init_dog - initialize a variable of dog
  * @d: Struct dog variable
  * @name: name
  * @age: age
  * @owner: owner name
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
