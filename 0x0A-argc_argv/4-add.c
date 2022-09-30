#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - function to add + numbers
 * @argc: No. of args on cmd line
 * @argv: [] of args
 * Return: Success(0)
 */

int main(int argc, char *argv[])
{
	int m, n, sum = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[m]);
	}
	printf("%d\n", sum);
	return (0);
}
