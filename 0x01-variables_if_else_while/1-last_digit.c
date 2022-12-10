#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int g = "last digit of" + n + "is";

	if (n > 5)
		printf(g + "%d and is greater than 5\n");
	else if (n == 0)
		printf(g + "%d and is 0\n");
	else if (n < 6 ( || 0))
		printf(g + "%d is less than 6 and not 0\n");
	else
		return (0);
}
