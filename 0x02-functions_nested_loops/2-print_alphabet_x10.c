#include "main.h"

/**
 *print_alphabet_x10 -> print in ten places
 */
void print_alphabet_x10(void)
{
	int e;
	int s;

	s = 0;
	e = 'a';
	for (s = 0; s < 10; s++)
	{
		while (e <=  'z')
		{
			_putchar(e);
			e++;
		}
		_putchar('\n');
	}
}
