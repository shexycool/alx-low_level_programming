#include "main.h"
/**
 * print_rev -> printing string in reverseand a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int find:
		/*finding length without character*/
	for (find = 0; s[find] != '\0'; ++find)
		;
	for (--find; find >= 0; --find)
		_putchar(s[find]);
	_putchar('\n');
}
