#include "main.h"
/**
 * _strchr - function to enter
 * @s: Parameter 1
 * @c: Parameter 2
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

