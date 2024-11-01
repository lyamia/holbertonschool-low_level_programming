#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: iThe number of underscores to print
 *
 * Return: None
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
