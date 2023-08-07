#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - the nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2  dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **gat;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	gat = malloc(sizeof(int *) * height);

	if (gat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gat[i] = malloc(sizeof(int) * width);

		if (gat[i] == NULL)
		{
			for (; i >= 0; i--)
				free(gat[i]);

			free(gat);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			gat[i][j] = 0;
	}

	return (gat);
}

