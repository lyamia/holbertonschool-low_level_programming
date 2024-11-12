#include "main.h"
/**
 * string_toupper - Converts the string to uppercase letter
 * @str: input string
 *
 * Return: the converted string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
