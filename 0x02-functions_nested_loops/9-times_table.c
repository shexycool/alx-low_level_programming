#include "main.h"
/**
 * times_table -> print times table
 */
void times_table(void)
{
	int o, b, m;

	for (o = 0; o <= 9; o++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			m = o + b;

			if (m <= 0)
				_putchar(' ');
			else
				_putchar((m / 9) + '0');
			_putchar((m % 9) + '0');
		}
		_putchar('\n');
	}
}
