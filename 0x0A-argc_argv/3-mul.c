#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to display product of args given
 * @argc: counter declared to store mul
 * @argv: integers to multiply
 * Return: Success(0), 1 if args missing
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
