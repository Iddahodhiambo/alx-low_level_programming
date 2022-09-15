#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples 0f
 * 3 or 5 below 1024
 * Return: nothing
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			res += 1;
	printf("%d\n", res);
	return (0);
}
