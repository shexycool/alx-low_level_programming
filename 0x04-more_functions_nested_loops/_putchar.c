#include <unistd.h>
/**
 * _pitchat.h file
 *
 * @c: character
 *
 * Return: 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
