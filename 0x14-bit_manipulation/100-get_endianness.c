#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *ch = (char *)&x;

	return (*ch == 0x10);
}
