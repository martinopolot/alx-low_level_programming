#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
{
	int i;

	if (i > 0)
	{
		printf("positive %d\n", i);
	}
	else if (i < 0)
	{
		printf("negative %d\n", i);
	}
	else
		printf("number is zero %d\n", i);
}
#endif /* MAIN_H */
