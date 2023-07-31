#include "lists.h"

/**
 * listint_len - Print len of linked list
 * @h: type listint_t
 * Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	unsigned int cnt = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		cnt++;
	}

	return (cnt);
}
