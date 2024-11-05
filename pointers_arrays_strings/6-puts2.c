#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The string to process.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
