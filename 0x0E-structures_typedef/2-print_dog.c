#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints contents of struct dog
 * @d: structure pointer
 */
void print_dog(struct dog *d)
{
	if  (d->name == NULL)
		printf("nili");
	if  (d->age == 0)
		printf(" nil");
       if (d->owner == NULL)
		printf("nil");
	if (!d)
		printf(" ");

	printf("Name : %s\nAge : %f\nOwner : %s", d->name, d->age, d->owner);
}
