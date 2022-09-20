#include "main.h"

/**
 * puts_half - Function that prints half of a string.
 * @str: Input string.
 * Return: returns nothing.
 */
void puts_half(char *str)
{
	int counter = 0, index;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
			break;
		counter++;
	}

	if (counter % 2 == 1)
		index = counter / 2;
	else
		index = (counter - 1) / 2;

	for (index++; index < counter; index++)
		_putchar(str[index]);
	_putchar('\n');
}
