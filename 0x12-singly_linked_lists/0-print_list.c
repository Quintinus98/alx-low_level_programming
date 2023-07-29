#include "lists.h"

/**
 * print_list - Prints List
 * @h: type list_t.
 * Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	unsigned int cnt = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		cnt++;
	}

	return (cnt);
}
