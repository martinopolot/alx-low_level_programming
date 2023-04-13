#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calls other functions
 * @argc: arguments
 * @argv: array arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, res;
	char m;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	m = *argv[2];

	if ((m == '/' || m == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = func(arg1, arg2);
	printf("%d\n", res);
	return (0);
}
