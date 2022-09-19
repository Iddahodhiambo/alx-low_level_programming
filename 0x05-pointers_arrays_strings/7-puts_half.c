#include "main.h"

/**
 * puts_half - prints out the first half
 * @str: input string to print
 */
void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	_putchar('\n');
}
