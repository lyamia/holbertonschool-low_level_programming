#include <stdio.h>
/**
 * main - True
 *
 * Return: Always 0
 */
int main(void)
{ int letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
