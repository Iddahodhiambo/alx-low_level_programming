#include <stdio.h>
/**
 * main - print if the number is positive,negative,or zero
 *
 * Description:using the main function
 * this program prints "Programming is positive,negative,or zero
 * Return: 0
 * */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
