#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

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
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	 ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
