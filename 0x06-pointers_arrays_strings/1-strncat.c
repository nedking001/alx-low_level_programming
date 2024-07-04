#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: Parameter 1
 * @src: Parameter 2
 * @n: Parameter 3
 *
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;

	}
	dest[len + i] = '\0';
	return (dest);

}
