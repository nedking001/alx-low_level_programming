#include <stdio.h>

/**
 * main - contains the main fucntion
 *
 * Return: returns 0 value
 */

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar ('\n');
	return (0);

}
