#include "main.h"
/**
 * _strstr - Locates the first occurrence of a substring
 * @haystack: The main string to search within.
 * @needle: The substring to search for
 *
 * Return: pointer to the ebgining
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	if (*needle == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
