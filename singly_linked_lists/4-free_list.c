#include "lists.h"

/**
 * free_list - free a list of node
 * @head: head of list
 * Return: None
 */

void free_list(list_t *head);
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
