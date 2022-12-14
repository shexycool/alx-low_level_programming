#include"main.h"

/**
 * main - entry point
 *
 * Return: Alwas 0
 */
int main(void)
{
	void print_alphabet(void)
	{
		char f;

		f = "a";
		while (f < "z")
		{
			_putchar(f);
			f++;
		}
	_putchar('\n');
	return (0);
}
