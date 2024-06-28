#include "main.h"

/**
 * _isdigit - checks for 0 thru 9
 * @c: parameter 1
 *
 * Return: 0 on failure and 1 on success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
