#include "main.h"
/**
 * print_last_digit -> printing last digit of a set of numbers
 * @n: parameter
 * Return: ...
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar(a + '0');
	return (n);
}
