#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a node at the beginning of a list
  * @head: indicates a double pointer to the head of the link
  * @n: an interger to represent a new link
  *
  * Return: return Null if it fails or otherwise
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	if (head == NULL)
		return (NULL);

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
