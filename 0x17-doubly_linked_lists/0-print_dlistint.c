#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head
 * Return: Prints and Returns the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int cnt = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		cnt++;
		temp = temp->next;
	}

	return (cnt);
}
