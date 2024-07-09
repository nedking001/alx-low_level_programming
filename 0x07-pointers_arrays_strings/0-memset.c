#include "main.h"
/**
 * _memset - funtion to fill memory
 * @s: where to start
 * @b: value needed
 * @n: no of bytes changed
 *
 * Return: array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

