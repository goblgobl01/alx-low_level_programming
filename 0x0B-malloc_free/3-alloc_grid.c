#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers.
 *
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated 2D grid of integers or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
int **ptr;
int i, j, a;
int allocation_successful = 0;
if (width <= 0 || height <= 0)
	return (NULL);

else
{
	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);
		if (ptr[a] == NULL)
		{
			allocation_successful = 0;
			break;
		}
	}
	if (!allocation_successful)
	{
		for (i = 0; i < a; i++)
			free(ptr[i]);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		ptr[i][j] = 0;
	}

	return (ptr);
}

}
