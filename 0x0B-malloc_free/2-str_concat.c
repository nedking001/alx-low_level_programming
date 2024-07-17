#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci, len1, len2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	len1 = len2 = 0;
	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	conct = malloc(sizeof(char) * (len1 + len2 + 1));
	if (conct == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	conct[i] = s1[i];

	for (ci = 0; ci < len2; ci++, i++)
	conct[i] = s2[ci];

	conct[i] = '\0';

	return (conct);
}
