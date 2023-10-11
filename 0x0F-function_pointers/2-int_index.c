#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 *
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function to use.
 *
 * Return: The index of the first matching element, or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
	return (-1);

else
{
	int i, result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result = cmp(*(array + i));
		i++;
		if (result != 0)
			return (i - 1);
	}
}

return (-1);
}
