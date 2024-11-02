#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 *
 * Return: None
 */
void print_square(int size)
{
	int width, height;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
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
