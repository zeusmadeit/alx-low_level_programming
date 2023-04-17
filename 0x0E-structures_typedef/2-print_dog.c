#include "dog.h"

/**
 * print-dog - prints a struct dog
 * @d: struct of type dog
 */
void	print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		d->age == NULL ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
