#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);

}
