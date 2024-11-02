#include "main.h"
/**
 * swap_int - main
 * @a: var 1
 * @b: var 2
 */

void swap_int(int *a, int *b)
{
	int var_tmpr = *a;
	*a = *b;
	*b = var_tmpr;
}
