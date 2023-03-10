#include"main.h"

/**
 * helper - function to loop eith new second variable
 * @n: int arg
 * @result: int arg
 * Return: square root
 */

int helper(int n, int result)
{
	if (result * result == n)
	{
		return (result);
	}
	else if (result * result > n)
	{
		return (-1);
	}
	else
		return (helper(n, result + 1));
}


/**
 * _sqrt_recursion - returns the natural sqaure root of a number
 * @n: input number
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (helper(n, 0));
}
