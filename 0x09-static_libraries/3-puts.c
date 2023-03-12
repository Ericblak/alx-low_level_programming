#include "main.h"

/**
 * _puts - Write a text
 *
 * @s: This is my entry
 *
 */

void _puts(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
