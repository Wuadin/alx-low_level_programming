#include "main.h"

/**
 * swap_int - swaping 2 integer using a pointer
 *
 * @a: An integer to swap
 * @b: Another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
