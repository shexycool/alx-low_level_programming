#include "main.h"
#include "stdio.h"

/**
 * main - entry point
 *
 * print_alphabet
 */
void print_alphabet(void)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
		_putchar(f);
	}
	_putchar('\n');
}
