#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Demographics of a dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  */
struct dog
{
	char name;
	float age;
	char *owner;
};
typedef struct dog dog_x;
#endif
