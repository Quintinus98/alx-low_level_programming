#include "lists.h"

/**
 * print_listint - Print list int
 * @h: type listint_t
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	unsigned int cnt = 0;

	while (tmp != NULL)
	{
		if (tmp->n == NULL)
			printf("(nil)\n");
		else
			printf("%d\n", tmp->n);
		tmp = tmp->next;
		cnt++;
	}

	return (cnt);
}
