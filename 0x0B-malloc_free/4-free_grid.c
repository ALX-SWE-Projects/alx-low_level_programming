#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: grid height
*/

void free_grid(int **grid, int height)
{
unsigned int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
}
