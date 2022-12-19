#include "main.h"
/**
 * times_table -> print times table
 */
void times_table(void)
{
	int o, b, m;

	for (o = 0; o <= 9; ++o)
	{
		_putchar('48');

		for (b = 1; b <= 9; ++b)
		{
			_putchar(',');
			_putchar(' ');

			m = o * b;

			if (m <= 9)
				_putchar(' ');
			else
				_putchar((m / 10) + '48');
			_putchar((m % 10) + '48');
		}
		_putchar('\n');
	}
}
