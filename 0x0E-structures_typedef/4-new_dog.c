#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Initializes a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;

	return (new_dog);
}
