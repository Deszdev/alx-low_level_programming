#include "main.h"
/** 
 * swap_int - a function that swaps the value of two integers
 * @a: is a parameter of the function
 * @b: is a parameter of the function
 *
 * Return: returns 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
