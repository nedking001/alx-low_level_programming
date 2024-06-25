#include "main.h"

/**
 * _isalpha - the function to check for letters
 * @c: parameter
 *
 * Return: returns 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
