#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list.
 * @h: type list_t.
 * Return: the number of nodes.
*/

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	unsigned int cnt = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		cnt++;
	}

	return (cnt);
}
