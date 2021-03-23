#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at end of list
 * @head: list
 * @n: element to add
 * Return: new element or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *head_;

	end = malloc(sizeof(listint_t));
	if (!end)
	{
		free(end);
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	head_ = *head;
	while (head_->next != NULL)
		head_ = head_->next;
	head_->next = end;
	return (end);
}
