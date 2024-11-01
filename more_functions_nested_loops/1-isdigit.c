#include "main.h"
/**
 * _idigit - main
 * @c: var 1
 *
 * Return 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
