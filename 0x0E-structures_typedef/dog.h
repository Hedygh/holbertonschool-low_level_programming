#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;
/**
 * struct dog - structure that takes 3 members
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif