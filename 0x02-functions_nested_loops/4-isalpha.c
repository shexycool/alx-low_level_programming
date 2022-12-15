#include "main.h"
/**
 * _isalpha -> checking for leters
 * @c: is a character
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
