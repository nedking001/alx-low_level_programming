#include <stdio.h>

/**
 * main - contains the main funtion
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
