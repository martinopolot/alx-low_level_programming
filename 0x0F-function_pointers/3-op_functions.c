#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - calculate the sum of 2 integers
 * @a: first inpute
 * @b: second inpute
 *
 * Return: sum of a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate diff of 2 integers
 * @a: first integer
 * @b: second number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate product of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: pdt of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate div of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: answer from a div b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of  a number
 * @a: first number
 * @b: second number
 *
 * Return: remainder of a div b
 */
int op_mod(int a, int b)
{
	if(!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
