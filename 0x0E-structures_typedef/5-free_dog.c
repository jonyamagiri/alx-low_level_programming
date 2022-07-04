#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - function that frees dogs
* @d: struct of dog to be freed
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);
}
