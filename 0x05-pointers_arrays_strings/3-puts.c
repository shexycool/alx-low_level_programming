#include "main.h"
/**
 * _puts -> print string and a new line
 * @str: the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
