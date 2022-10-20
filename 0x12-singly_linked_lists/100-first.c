#include <stdio.h>

void lovely_hare(void)__attribute__((constructor));

/**
 * lovely_hare - shows"You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n before the main function is executed.
 */
void lovely_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
