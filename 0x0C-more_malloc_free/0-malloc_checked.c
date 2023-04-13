#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: malloc size
 * Return: pointer
 */

void *malloc_checked(unsgined int b)
{
	void *memory;

	memeory = malloc(b);

	if (memeory == NULL)
		exit(98);

	return (memeory);
}

