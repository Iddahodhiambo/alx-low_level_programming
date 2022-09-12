#include <stdio.h>

/**
 * main - print alphabet reverse using putchar
 * Return:always 0 (sucess)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
