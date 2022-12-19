#include "main.h"
/**
 *
 *
 */
void puts_half(char *str)
{
	int b, n;

	for (b = 0; str[b] != '\0'; ++b)
		;
	if (b % 2 == 0)
	{
		for (n = b / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((b - 1) / 2) +1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
