#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Execute a given function on each element of an array.
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be executed on each element.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && size != 0 && action != NULL)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}

}
