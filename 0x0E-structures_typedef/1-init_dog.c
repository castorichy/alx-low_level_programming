#include "dog.h"

/**
 * init_dog - intializes dog structure
 * @d: dogs object
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
