#include <unistd.h>
/**
 * _putchar -> the prototype, writing c to stdout
 * @c: the character
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
