#include "main.h"
#include "stdio.h"

/**
 * main -  Prints the name of the program followed by a newline
 * @argc: THe number of command line args
 * @argv: An array of comman dline args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
