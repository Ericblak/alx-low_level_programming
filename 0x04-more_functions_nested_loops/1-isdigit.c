#include"main.h"

/**
 * _isdigit - Check if character is digit
 * @x: Character to be checked
 * Return: 1 is character is a digit or 0 for anything else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
