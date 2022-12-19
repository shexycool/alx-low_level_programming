#include "main.h"
/**
 * print_array -> print n elements
 *
 * @n: elemets parameter inputs
 *
 * @a: string parameter inputs
 */
void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; ++q)
	{
		if (q != (n - 1))
			printf("%d, ", a[q]);
		else
			printf("%d", a[q]);
	}
	printf("\n");
}
