#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - print the alphabet
 *
 * Return: Always success
 */

void print_alphabet(void)
{
	int n;
	for (n = "a"; n <= "z"; n++)
	{
		_putchar(n);
	}
	_putchar("\n");
}
