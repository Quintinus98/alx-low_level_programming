#include "lists.h"

void before_main(void) __attribute__((constructor));
/**
 * before_main - executes before main.
 *
 * Return: Always 0.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
