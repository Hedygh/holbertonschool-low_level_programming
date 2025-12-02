#include "lists.h"

/**
 * free_dlistint - free dlist
 * @head: head of list
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
