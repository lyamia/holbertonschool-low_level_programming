#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	test();
	return (0);
}
/**
 * test - program that prints FizzBuzz
 *
 * Return: None
 */

int test(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else
		{
		printf("%d ", num);
		}
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
