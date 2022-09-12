#include <stdio.h>

/**
 * main - prints hexadecimal base 0123456789abcdef,using putchar
 * Description: using the main function
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <=  'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
