#include "main.h"
/**
 * print_last_digit -> printing last digit of a set of numbers
 * @n: parameter
 * Return: ...
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
