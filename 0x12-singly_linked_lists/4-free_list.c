#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - free a linked list
 * @head: list to free
 * Return: None
 */

void free_list(list_t *head)
{
	list_t *freelist;

	while (head != NULL)
	{
		freelist = head;
		free(head->str);
		head = head->next;
		free(freelist);
	}
}
