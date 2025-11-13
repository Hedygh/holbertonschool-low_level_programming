#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - lenght of string
 * @s: lenght
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - copy src to dst
 * @dest: string receiving copy
 * @src: string to copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create a copy of newdog
 * @name: member
 * @age: member
 * @owner: member
 * Return: copy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname;
	char *newowner;

	if (!name || !owner)
		return (NULL);

	newdog = malloc(sizeof(*newdog));
	if (!newdog)
		return (NULL);

	newname = malloc(sizeof(char) * _strlen(name) + 1);
	if (!newname)
	{
		free(newname);
		return (NULL);
	}
	newowner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (!newowner)
	{
		free(newowner);
		return (NULL);
	}
	_strcpy(newname, name);
	_strcpy(newowner, owner);
	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;
	return (newdog);
}
