#include "lists.h"

/**
  * sum_listint - gives the sum of all the nodes
  * @head: the begining of a link
  *
  * Return: returns the sum of all the data in the list
  */

int sum_listint(listint_t *head)
{
	int sum;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

