#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: All digit numbersof base 10
 * Startinf from 0, followed by a new line
 * Return: Always(0)
 */

int main(void)

{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
