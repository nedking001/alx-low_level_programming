#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @a: Parameter 1
 * @n: number of elements in array
 *
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}

}
