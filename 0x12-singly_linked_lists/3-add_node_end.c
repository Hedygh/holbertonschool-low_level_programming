#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - length of string
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * add_node_end - add new node at the end of list
 * @head: linked list
 * @str: element to add to new node
 * Return: adress of new endnode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode;
	list_t *last;
	int i = 0;

	endnode = malloc(sizeof(list_t));
	if (!endnode)
		return (NULL);
	i = _strlen(str);
	endnode->str = strdup(str);
	endnode->len = i;
	endnode->next = NULL;
	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = endnode;

	return (endnode);
}
