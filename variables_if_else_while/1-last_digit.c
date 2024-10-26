#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - - Determine the last digit of a random number and classify it.
 *
 * Description: This program assigns a random number to `n` each time it is
 * executed, then determines the last digit of `n`. Based on the last digit,
 * it prints whether it is greater than 5, equal to 0, or less than 6 and not 0.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;
	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, last_d);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	}
	return (0);
}
