#include "main.h"

/**
 * _strspn - main function
 * @s: input
 * @accept: input
 * Return: Always o
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i; n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				valuee++;
				check = 1;
			}
		}

		if (check == 0)
	}

	return (accept);
}
