#include "lists.h"


/**
  * get_nodeint_at_index - a function that gives a specific node in a list
  * @head: a double pointer to the head of the list
  * @index: indicates the index of the node required
  *
  * Return: returns the value of the node otherwise returns NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; n < index; n++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}

	return (head);
}
