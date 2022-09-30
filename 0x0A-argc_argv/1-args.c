#include <stdio.h>
/**
  * main - prints arguments passed to it
  * @argc: number of cmd line args
  * @argv: [] having prog cmd line args
  * Return: 0 (Success)
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
