#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_index, count_bits = 0;
	unsigned long int xor_result = n ^ m;

	for (bit_index = 63; bit_index >= 0; bit_index--)
	{
	unsigned long int current_bit = xor_result >> bit_index;

		if (current_bit & 1)
			count_bits++;
	}

	return (count_bits);
}
