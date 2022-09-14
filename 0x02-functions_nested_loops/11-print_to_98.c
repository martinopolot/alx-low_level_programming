#include "main.h"
/**
 * print_to_98 - func to print nural numbers
 * @n: int n
 * Description: display numbers from 0 - 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n < 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	printf("98\n");
}
