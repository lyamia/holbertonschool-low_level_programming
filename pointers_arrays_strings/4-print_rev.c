#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a newline.
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
	char *str = s;

	while (*s)
{
	s++;
}
s--;

while (s >= str)
{
	_putchar(*s--);
}
_putchar('\n');
}
