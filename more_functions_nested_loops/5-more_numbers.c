#include "main.h"
/**
 * more_numbers - main
 *
 * Return: zero
 */

void more_numbers(void)
{
	int num;
	int times = 0;

		while (times < 10)
		{
			for (num = 0; num <= 14; num++)
			{
				if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			}
			times++;
			_putchar('\n');
		}
}
