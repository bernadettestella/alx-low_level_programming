#include "lists.h"

/**
  * listint_len - lists all the elements linked in a list
  * @h: a pointer to the head of the links
  *
  * Return: returns the number of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
