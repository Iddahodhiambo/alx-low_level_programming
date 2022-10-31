#include "main.h"
/**
 * flip_bits -counts no of bitss needed to be flipped
 * @n: the number
 * @m: the no to flip n to
 *
 * Return: the number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
