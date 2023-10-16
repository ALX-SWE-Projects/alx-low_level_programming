#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: the adress of a string
 * return :  returns the length of a string
 */
int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
}
return (count);
}