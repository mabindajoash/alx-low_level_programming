#include <stdio.h>
#include "dog.h"
/**
  * intit_dog - initialize a variable of type struct dog
  * @d: variable of type struct dog
  * @name: name of the dog
  * @age: age of the gog
  * @owner: owner of the dog
  * @Return: 0
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
