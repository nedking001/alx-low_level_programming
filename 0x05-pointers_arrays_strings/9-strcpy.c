#include "main.h"

/**
 * _strcpy - copies strings pointed to by src
 * @dest: Parameter 1
 * @src: Parameter 2
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);

}

