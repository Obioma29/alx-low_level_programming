#include "main.h"
/**
 * _puts - Entry point
 * Description: prints a string, followed by a new line
 * to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}