#include "main.h"
/**
 * _strchr - Locates a caharacter
 * @s: - string to search
 * @c: chaacter to locate
 *
 * Return: pointer tot the first occurenec of the char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
