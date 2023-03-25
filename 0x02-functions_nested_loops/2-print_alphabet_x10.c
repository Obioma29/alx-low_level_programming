2-print_alphabet_x10.c#include "main.h"
/**
 * print_alphabet_x10 - alphabets
 * Description: print_alphabet_x10
 * Return: Success(0)
 */

void print_alphabet_x10(void)

{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

