#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolutr value of an integer
 * @c:integer to be used in the argument of function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
