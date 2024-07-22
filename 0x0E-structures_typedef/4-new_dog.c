#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
  * new_dog - creats a new dog and stores a copy of name and owner
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: pointer to the new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name;
	char *new_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	new_name = malloc(sizeof(strlen(name)) + 1);
	if (new_name == NULL)
		return (NULL);
	strcpy(new_name, name);
	new_owner = malloc(sizeof(strlen(owner)) + 1);
	if (new_owner == NULL)
		return (NULL);
	strcpy(new_owner, owner);
	d->name = new_name;
	d->age = age;
	d->owner = new_owner;
	return (d);
}
