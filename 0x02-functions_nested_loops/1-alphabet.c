#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet
 *
 * Return: Alwas 0
 */
void print_alphabet(void)
{
	char f;

	f = 'a';
	while (f < 'z')
	{
		_putchar(f);
		f++;
	}
	_putchar('\n')
}
