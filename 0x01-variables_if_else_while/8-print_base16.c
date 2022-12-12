#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int s;

	char d;

	s = 0;
	d = 'a';
	while
		(s < 10) {
			putchar(s + '0');
			s++;
		}
	while
		(d <= 'f') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
