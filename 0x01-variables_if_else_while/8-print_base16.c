#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}
