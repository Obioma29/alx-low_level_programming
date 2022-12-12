#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 * Description: a to z in reverse order
 * Return: Always(0)
 */

int main(void)

{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

