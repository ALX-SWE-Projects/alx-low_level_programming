#include "main.h"

/**
* rev_string - reverses a string
* @s: a string
*/
void rev_string(char *s)
{
int count = 0;
int i = 0;

while (*(s + count) != '\0')
{
count++;
}

count--;

while (count > i)
{
char temp = s[i];
s[i] = s[count];
s[count] = temp;
count--;
i++;
}
}
