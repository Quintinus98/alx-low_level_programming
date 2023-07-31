#include "lists.h"

/**
 * free_listint - frees a list_t list.
 * @head: Beginning of the list.
 * Return: Nothing.
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
