#include "main.h"
#include <unistd.h>
typedef int make_iso_compliers_happy;
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 * Return: On sucess 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
