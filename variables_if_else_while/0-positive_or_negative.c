#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/*
 * main - Entry point of the program
 *
 * Description: This program generatesa random number and checks
 * whether the number is positive, negative, or zero, and prints
 * the result accordingly.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
