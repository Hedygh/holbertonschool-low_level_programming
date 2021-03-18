#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add new node at the beginning of list
 * @head: head element
 * @str: element to add
 * Return: adress of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(newnode->str);
	newnode->next = (*head);
	(*head) = newnode;
	return (newnode);
}
