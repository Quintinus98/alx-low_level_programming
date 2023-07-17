#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - data type dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A dog is a dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for type dog;
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
