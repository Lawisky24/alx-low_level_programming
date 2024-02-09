#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int with the decimal value of the binary number,
 *         or 0 if there is an error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}

	return (num);
}
