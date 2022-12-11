#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Alphabets in lower case followed by new line
 *
 * Return: Always (0)
 */

int main(void)

{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
