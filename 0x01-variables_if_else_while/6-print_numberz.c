/*
 * Author: Martin Opolot
 * Date: 10-9-22
 */

#include <stdio.h>
/**
 * main - print all single digits numbers of base 10 starting with 0 using putchar and without char
 *
 * Return: Always 0 (Succesint)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
