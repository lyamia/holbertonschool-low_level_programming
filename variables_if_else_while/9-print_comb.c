#include <stdio.h>

/**
 * main -IDK
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	return (0);
}
