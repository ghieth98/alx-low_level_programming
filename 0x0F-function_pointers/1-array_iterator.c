#include "function_pointers.h"

/**
 * array_iterator - execute function on array via function ptr
 * @array: array
 * @size: size of array
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size)
		for (i = 0; i < size; i++)
			action(array[i]);
}
