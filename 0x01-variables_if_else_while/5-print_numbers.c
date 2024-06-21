#include <stdio.h>

/**
 * main - contains the main function
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);

}
