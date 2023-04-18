#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees struct dog
 *
 * @d: poin
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
