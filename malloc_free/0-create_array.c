#include "main.h"
#include "stdlib.h"
/**
 * create_array - creates an array of chars
 * @size: size of the malloc
 * @c: chars tha will be assigned
 *
 * Return: pointer to array or nul
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
