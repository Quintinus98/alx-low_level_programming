#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Initializes dog
 * @d: variable d of structure dog.
 *
 * Return: Nothing.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);

	if (d->name == NULL)
		d->name = '(nil)';
	if (!(d->age))
		d->age = '(nil)';
	if (d->owner == NULL)
		d->owner = '(nil)';

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
