#include "main.h"
/**
 *  print_diagonal - draws a diagonal line on the terminal
 *  @n: The number of diagonal to print
 *
 *  Return: None
 */

void print_diagonal(int n)
{
	int diag, space;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		}
	else
		{
			_putchar('\n');
		}
	}
