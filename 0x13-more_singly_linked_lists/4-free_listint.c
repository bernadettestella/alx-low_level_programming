#include "lists.h"

/**
  * free_listint - frees a list
  * @head: indicates a pointer to the head of the link
  *
  */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);

		head = new;
	}

}
