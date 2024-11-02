#include "main.h"
#include <stdio.h>

/**
 * test - program that prints FizzBuzz
 *
 * Return: None
 */
int main(void)
{
	test();
	return (0);
}

int test(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("%s", "Fizz ");
		}
		printf("%d ", num);
	}
	return (0);
}
