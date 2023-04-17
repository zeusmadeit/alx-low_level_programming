#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - structure representing a dog
*@name: the dog's name
*@age: the dog's age
*@owner: owner's name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void    init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t	*new_dog(char *name, float age, char *owner);

#endif
