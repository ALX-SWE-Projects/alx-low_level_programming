#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	n = 65;
	while (n <= 90)
	{
	putchar(n);
	n++;
	}
	n = 97;
	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);

}
