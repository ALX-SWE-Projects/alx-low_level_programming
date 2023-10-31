#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly created string
*/
char *str_concat(char *s1, char *s2)
{
char *con;
unsigned int s1count, s2count, sum, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (s1count = 0; s1[s1count] != '\0'; s1count++)
;

for (s2count = 0; s2[s2count] != '\0'; s2count++)
;

sum = s1count + s2count;

con = malloc(sizeof(s1) * sum);

for (i = 0; i < s1count; i++)
{
con[i] = s1[i];
}

for (j = 0; j < s2count; j++)
{
con[j + s1count] = s2[j];
}

return (con);
}
