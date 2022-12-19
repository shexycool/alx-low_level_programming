#include "main.h"
/**
 * swap_int -> swapping values of two integers
 * @a: first integer
 * @b: second integer
 *
 */
void swap_int(int *a, int *b)
{
	int chris;

	chris = *a;
	*a = *b;
	*b = chris;
}
