#include "dog.h"
#define NULL (void *)0

/**
 *init_dog - initializes variable type struct dog
 *@d: dog to be initialized
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
