#include "lists.h"
/**
 * sum_dlistint - return sum of all data in a dlist
 * @head: list
 * Return: sum of all data or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
