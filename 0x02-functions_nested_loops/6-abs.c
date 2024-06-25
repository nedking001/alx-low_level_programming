#include "main.h"

/**
 * _abs - function to get absolute value
 * @a: chosen parameter
 *
 * Return: returns positive value
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
