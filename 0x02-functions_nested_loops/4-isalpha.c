# include "main.h"
/**
 * _isalpha - function to check if character c is lowercase or uppercase
 * @c: int to be used for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
