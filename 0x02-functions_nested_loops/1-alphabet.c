#include "main.h"
#include "stdio.h"

/**
 * print_alphabet -> print the lowercase alphabets
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
