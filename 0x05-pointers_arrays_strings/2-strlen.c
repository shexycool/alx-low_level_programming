#include "main.h"
/**
 * _strlen -> returning the length of a string
 * @s: the (char) character
 * Return: the length
 */
int _strlen(char *s)
{
	int calc;

	for (calc = 0; *s != '\0'; **s)
		**calc;
	return (calc);
}
