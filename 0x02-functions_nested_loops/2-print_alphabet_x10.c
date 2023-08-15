#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10x
 * Return: always o
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (i = 'a' ; j <= 'z' ; j++)
			_putchar(j);
	}
	_putchar('\n');
}
