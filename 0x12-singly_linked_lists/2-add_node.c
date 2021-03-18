#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stddef.h>
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
 * add_node - add new node at the beginning of list
 * @head: head element
 * @str: element to add
 * Return: adress of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	i = _strlen(str);
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = (*head);
	(*head) = newnode;
	return (newnode);
}
