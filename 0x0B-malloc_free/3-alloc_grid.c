#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: pointer to the array
*/
int **alloc_grid(int width, int height)
{
int **grid;
unsigned int i, j, k;

if (width < 0 || height < 0)
{
return (NULL);
}

grid = malloc(height * sizeof(height));

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(width));
}

for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
{
grid[j][k] = 0;
}
}
return (grid);
}
