#include "lists.h"

/**
  * pop_listint - deletes the head node of a list
  * @head: a double pointer to the head of the link
  *
  * Return: returns the head nodes data
  *
  */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int x;

	if (head == NULL || *head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	x = first->n;

	free(first);

	return (x);
}

