#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head
 * Return: Returns the number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int cnt = 0;

	while (temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}

	return (cnt);
}
