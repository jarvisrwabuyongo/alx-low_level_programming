#include "main.h"

/**
 * print_numbers - This function prints numbers from 0 to 9
 *
 *
 * Return: Does not return any value
 */

void print_numbers(void)
{

	int i;

	for (i = 1; i <= 9; i++)
	{
		_putchar(48 + i);
	}
	_putchar('\n');
}
