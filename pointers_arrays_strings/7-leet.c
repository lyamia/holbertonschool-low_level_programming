#include "main.h"
/**
 * leet - Encode a string
 * @str: the string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[i] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[i];
				break;
			}
		}
	}
	return (str);
}
