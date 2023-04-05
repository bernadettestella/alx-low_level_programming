#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: indicates a double pointer to the head of the link
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		new = *head;

	}

}
