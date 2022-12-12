#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int o;

	int t;

	for (o = 0; o < 50; o++)
	{
		putchar(o + '0');
	}
	for (t = 50; t < 100; t++)
	{
		putchar(t);
		if (t > o)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
