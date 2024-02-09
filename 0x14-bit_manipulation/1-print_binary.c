#include "main.h"

/**
 * _pow - Calculates (base ^ power).
 * @base: Base of the exponent.
 * @power: Power of the exponent.
 *
 * Return: Value of (base ^ power).
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;
	unsigned int a;

	for (a = 1; a <= power; a++)
	{
		num *= base;
	}
	return (num);
}

/**
 * print_binary - Prints a number in binary notation.
 * @n: Number to print.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	char flag = 0;
	unsigned long int divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		unsigned long int check = n & divisor;

		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		} else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}

		divisor >>= 1;
	}
}
