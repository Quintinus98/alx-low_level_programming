#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: Beginning of the list.
 * Return: Nothing.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
