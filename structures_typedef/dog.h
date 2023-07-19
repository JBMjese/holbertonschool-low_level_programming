#ifndef DOG_H
#define DOG_H
/**
  ** struct dog - struture of a dog
   * @name: name
   * @age: age
   * @owner: owner
   */
typedef struct dog dog_t;
{
	char *name;
	float age;
	char *owner;

}; 

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endifi
