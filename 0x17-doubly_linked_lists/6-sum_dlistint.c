#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data
 * @head: pointer to the head of the linked list
 * Return: the sum of all the data of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
