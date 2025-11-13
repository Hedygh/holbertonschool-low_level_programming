#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct
 * @d: point to struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
