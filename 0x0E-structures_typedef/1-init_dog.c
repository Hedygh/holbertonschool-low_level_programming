#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - create variable of type struct
 * @d: pointer to pass the struct
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	};
}
