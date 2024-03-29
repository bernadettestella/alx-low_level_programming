#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all the elements of the lisint_t
  * @h: pointer to the beginning of the link
  *
  * Return: returns the number of elements in the list
  *
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
