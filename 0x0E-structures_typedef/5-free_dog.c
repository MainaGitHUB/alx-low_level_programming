#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees dogs.
 * @d: struct dog
 * Return: nothinh
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
