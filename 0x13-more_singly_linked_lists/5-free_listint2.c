#include "lists.h"
/**
 * free_listint2 - free list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *free_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free_node = *head;
		*head = (*head)->next;
		free(free_node);
	}
	*head = NULL;
}
