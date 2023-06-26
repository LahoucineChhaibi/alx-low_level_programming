
#include "main.h"
#include <stdio.h>


/**
 * print_array - prints an aray a number of times.
 * @a: an array.
 * @n: the number of elements to print.
 *
 */


void print_array(int *a, int n)
{
	int index;
	
	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
