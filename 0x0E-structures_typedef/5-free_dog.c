#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Frees a dog
 * @d: typedef of the dog
 *
 * Return: Nothing.
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
