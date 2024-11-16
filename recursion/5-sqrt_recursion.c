#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n if it exists, or -1 if not
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - Helper function to calculate square root recursively
 * @n: The number to find the square root of
 * @x: The current guess for the square root
 *
 * Return: The square root of n if it exists, or -1 if not
 */

int _sqrt_helper(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_sqrt_helper(n, x + 1));
}
