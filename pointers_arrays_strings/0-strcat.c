#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: var 1
 * @src: var 2
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}
