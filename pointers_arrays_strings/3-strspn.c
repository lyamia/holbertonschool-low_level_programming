#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check the initialsegment
 * @accept: stirng to check
 *
 *Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}
