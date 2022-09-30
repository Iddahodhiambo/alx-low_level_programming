#include <unistd.h>

/**
 * _putchar - writes the characyer to c to stdout
 * @c: the character to print
 *
 * Return: on sucess 1.
 * on error, -1 is required, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
