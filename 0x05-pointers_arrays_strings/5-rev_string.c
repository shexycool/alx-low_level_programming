#include "main.h"
/**
 * rev_string -> reversing a string
 * @s: string parameter
 */
void rev_string(char *s)
{
	int h, r;
	char ro;

	for (h = 0; s[h] != '\0'; ++h)
		;
	for (r = 0; r < h / 2; ++r)
	{
		ro = s[r];
		s[r] = s[h - 1 - r];
		s[h - 1 - r] = ro;
	}
}
