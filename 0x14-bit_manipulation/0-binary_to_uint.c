#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int str_length = 0, base = 1;

if (!string_check(b))
return (0);

while (b[str_length] != '\0')
str_length++;

while (str_length)
{
decimal += ((b[str_length - 1] - '0') * base);
base *= 2;
str_length--;
}
return (decimal);
}

/**
 * string_check - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int string_check(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}