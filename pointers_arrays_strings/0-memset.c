#include "main.h"
/**
 * _memset - fills memory with a consonant byte
 * @s: pointer to the memory to be filled
 * @b: byte to fill
 * @n: nuber of bytes
 *
 * Return: pointer tot he array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
