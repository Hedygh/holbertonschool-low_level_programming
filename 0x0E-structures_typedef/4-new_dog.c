#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * _strlen - return the lenght of string
 * @s: string to mesure
 *
 * Return: lenght value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * _strcpy - copy the string src to the buffer dest
 * @dest: buffer
 * @src: string to copy
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
 * new_dog - create a new struct and copy member
 * @name: member name
 * @age: member age
 * @owner: member owner
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *newname;
	char *newowner;

	if (name == NULL || owner == NULL)
		return (0);

	new = malloc(sizeof(dog_t));
	if (!new)
		return (0);

	newname = malloc(sizeof(char) * _strlen(name) + 1);
	if (!newname)
	{
		free(new);
		return (0);
	}

	newowner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (!newowner)
	{
		free(new);
		free(newname);
		return (0);
	}

	(*new).name = _strcpy(newname, name);
	(*new).age = age;
	(*new).owner = _strcpy(newowner, owner);
	return (new);
}
