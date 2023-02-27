#include "main.h"

/**
 * reset_to_98 - function to reset parameter
 * @n - pointer to integer we want to reset
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	printf("Value of 'n': %p\n, n);
	printf("Address of 'n': %p\n", &n);
	*n = 98;
}
