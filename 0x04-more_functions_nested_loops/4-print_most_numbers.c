#include"main.h"
/**
 *print_most_numbers - print num betwwen 0 and 9
 *(neither 2 or 4)
 * Return: void
 */
void print_most_numbers(void)

{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		_putchar(x + '0');
	}
	_putchar('\n');
}
