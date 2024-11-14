#include "main.h"
/**
 * * _strpbrk - Locates the first occurrence of any byte in `s` in `accept`
 * @s: The string to search through
 * @accept: The set of bytes to match
 *
 * Return: Pointer to the first matching byte in `s`, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (NULL);
}
