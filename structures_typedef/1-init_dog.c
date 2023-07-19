#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
  ** init_dog - initialize a variable of a dog
  * @d: Struct dog variable
  * @name: name
  * @age: age
  * @owner: owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d!= NULL)
	{
		d-> name = name;
		d-> age = age;
		d-> owner = owner;
	}
}	
#endif
