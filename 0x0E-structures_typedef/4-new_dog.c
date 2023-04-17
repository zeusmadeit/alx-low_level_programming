#include "main.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns new dog of typr dog_t
 */
dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
	return (my_dog);
}
