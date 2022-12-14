#include"main"

/**
 * main - entry point
 *
 * print putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int df;

	for (df = 0; df < 8; ++df)
		_putchar(str[df]);
	_putchar('\n');

	return (0);
}
