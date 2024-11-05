#include "main.h"
#include <stdio.h>
/**
 *print_array - main
 * @a: var 1
 * @n: var 2
 */

void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);

		if (index < n - 1)
		{
			printf(", ");
		}
		index++;
	}

printf("\n");
}
