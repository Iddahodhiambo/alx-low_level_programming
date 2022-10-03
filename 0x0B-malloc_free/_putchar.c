#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: the character to print
 *
 * Return:1
 * on Error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
