#include "main.h"
/**
 * print_triangle - main
 * @size: var
 * Return: None
 */

void print_triangle(int size)
{
	int width, height, space;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (space = size - height - 1; space > 0; space--)
			{
				_putchar(' ');
			}

			for (width = 0; width <= height; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
