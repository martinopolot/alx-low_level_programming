#include <stdio.h>

/**
 * main - function that prints all args it's passed to
 * @argc: No. of cmd line args
 * @argv: []that contains the progie cmd line args
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
		printf("%s\n", argv[m]);
	return (0);
}
