#include <unistd.h>

/**
 * _putchar _ writea character c'
 *
 * @c: the character
 *
 * Return: succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
