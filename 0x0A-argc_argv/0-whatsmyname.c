#include <stdio.h>
/**
 * main - prints name, followed by \n.
 * @argc: number of command line args.
 * @argv: array containing the program cmd line args
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
