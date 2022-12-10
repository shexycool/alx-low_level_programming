#include <stdlib.h>
#include <time.h>
/**
 * main - enter point
 *
 * Return: Always 0 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(n > 0)
		n = "is positive";
	if(n = 0) 
		n = "is zero";
	if(n < 0)
		n = "is negative";
	printf(%s\n, n);
	return (0);
}
