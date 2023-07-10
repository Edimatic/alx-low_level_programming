#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer at the end
 */
int **alloc_grid(int width, int height)
{
int **s;
int g, q;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}

	for (g = 0; g < height; g++)
	{
		s[g] = malloc(sizeof(int) * width);

		if (s[g] == NULL)
		{
			for (; g >= 0; g--)
			{
				free(s[g]);
			}
			free(s);
			return (NULL);
		}

		for (q = 0; q <= width; q++)
		{
			s[g][q] = 0;
		}
	}
	return (s);

}

