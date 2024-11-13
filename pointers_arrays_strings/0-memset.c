#include "main.h"
/**
 * _memset - fills memeory with a consonnat byte
 * @s: pointer to the memory to be filled
 * @b: byte to fill
 * @n: nuber of bytes
 *
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
