#include <stdio.h>

/**
 * main - contains main function that prints letters
 *
 * Return: returns 0 upon success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);

}
