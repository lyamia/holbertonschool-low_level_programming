#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: var 1
 * @src: var2
 * @n: var3
 *
 * Return: idk
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[length])
	{
		length++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[length++] = src[i];
		i++;
	}
	return (dest);
}
