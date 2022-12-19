#include "main.h"
/**
 * _strcpy -> copying a string
 *
 * @src: source of a string parmeter input
 * @dest: destination of dtring
 * Return: pointer to dest input
 */
char *_strcpy(char *dest, char *src)
{
	int f, j = 0;

	for (f = 0; src[f] != '\0'; ++f)
	{
		dest[j] = src[f];
		++j;
	}
	dest[j] = '\0';

	return (dest);
}
