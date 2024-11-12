#include "main.h"
/**
 * _strcmp -Compares two strings
 * @s1: var 1
 * @s2: var2
 *
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s2[i] != s1[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}
	return (s1[i] - s2[i]);
}
