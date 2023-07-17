#include "dog.h"
#include <stdlib.h>


/**
 * init_dog - Initializes dog
 * @d: variable d of structure dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	(*d).age = age;
	(*d).owner = owner;
}
