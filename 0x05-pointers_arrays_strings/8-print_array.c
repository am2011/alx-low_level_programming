#include <stdio.h>
#include "main.h"
/**
 * print_array - Print an array up to n.
 * @a: the array of elements
 * @n: the number of elements of the array *a.
 */
void print_array(int *a, int n)
{
	int i = 0;


	for (i = 0; i < n; i++)
	{

		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
