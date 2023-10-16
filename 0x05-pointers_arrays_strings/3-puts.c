#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: a string
 */
void _puts(char *str)
{
int count = 0;

while (*(str + count) != '\0')
{
putchar(*(str + count));
count++;
}
putchar('\n');
}
