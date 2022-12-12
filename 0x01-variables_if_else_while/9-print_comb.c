#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int w;

	for (w = 0; w < 80; w++)
	{
		putchar(w + '0');
		if (w < 79)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
