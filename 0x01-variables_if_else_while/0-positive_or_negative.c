#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand(RAND_MAX / 2);
	if(n > 0)
	{
		return ('is positive');
	}
	else if(n == 0)
	{
		return('is zero');
	}
	else if(n < 0)
	{
		return('is a negative');
	}
	else return (0);
}
