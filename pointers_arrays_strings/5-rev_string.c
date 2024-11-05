#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	char *end = s;
	char temp;

	while (*end)
	{
		end++;
	}
	end--;

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;

		s++;
		end--;
	}
}
