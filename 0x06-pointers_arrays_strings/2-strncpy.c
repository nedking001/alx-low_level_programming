#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Parameter 1
 * @src: Parameter 2
 * @n: Parameter 3
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);




}
