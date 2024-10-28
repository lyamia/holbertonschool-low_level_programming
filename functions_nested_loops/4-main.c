#include "main.h" 

/**
 * main - entry point for testing _islower
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

   r = _isalpha('Z');  // Test call to _isalpha with character 'Z'
   _putchar(r + '0');  // Print the result ('1' if true, '0' if false)
    return (0);
}
