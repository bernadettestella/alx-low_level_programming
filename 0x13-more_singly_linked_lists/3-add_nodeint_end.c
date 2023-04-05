#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a node at the end of a link
  * @head: indicates a double pointer to the head of the link
  * @n: indicates the addition of a new node
  *
  * Return: return nul if the function fails
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new;
	}

	return (new);
}
