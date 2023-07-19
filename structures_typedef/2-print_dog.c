#include <stdio.h>
#include "dog.h"

/**
  * print_dog - prints a struct dog
  * @d:variable
  * 
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	return;
	}
	printf("Nombre: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Edad: %.1f\n", d->age);
	printf("Propietario: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}	
