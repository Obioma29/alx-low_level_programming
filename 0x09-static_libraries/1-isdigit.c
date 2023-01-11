#include "main.h"
/**
 * _isupper - checks upper case
 * @c: print in
 * Return: give 1 f c is uppercase or 0 otherwise
 */

int _isupper(int c)

{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
	isupper = 1;
	break;
	}
	}
	return (isupper);
}
