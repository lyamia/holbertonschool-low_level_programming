#include "stdio.h"
/**
 * main - prints the arguments
 * @argc: numbe rof the arguments
 * @argv:syring o the args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("\n");
	return (0);
}
