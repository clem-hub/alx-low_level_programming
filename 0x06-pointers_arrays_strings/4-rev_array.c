#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		tmp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = tmp;

		start++, end--;
	}
}
