#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates the string str
 * @str: the string to be copied
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
char *strcopy;
unsigned int i, j;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
;

strcopy = malloc(sizeof(str) * i);

for (j = 0; j <= i; j++)
{
strcopy[j] = str[j];
}
return (strcopy);
}
