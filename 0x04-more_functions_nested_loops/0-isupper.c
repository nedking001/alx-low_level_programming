#include "main.h"

/**
 * _isupper - is function to print letters
 *
 * @c: Parameter 1
 *
 * Return: returns 0 on failure and 1 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
