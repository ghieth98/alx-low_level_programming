#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *y;

	i = y = head;

	while (i != NULL && y != NULL)
	{
		i = i->next;
		y = y->next->next;

		if (i == y)
		{
			i = head;
			while (i != y)
			{
				i = i->next;
				y = y->next;
			}
			return (i);
		}
	}

	return (NULL);
}
