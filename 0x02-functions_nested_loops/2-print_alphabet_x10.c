#include "main.h"

/**
 *print_alphabet_x10 -> print in ten places
 */
void print_alphabet_x10(void)
{
	int e;
	int s;

	for (s = 0; s < 10; s++)
	{
		for (e = 'a'; e <=  'z'; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
