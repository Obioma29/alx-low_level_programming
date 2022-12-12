#include <stdio.h>

/**
 * main - Entry point
 * Description: Alphabets starting fron a to Z without q and e
 *
 * Return: Always (0)
 */

int main(void)

{
	char c = 'a';

		while (c <= 'z')
		{
			if (c != 'e' && c != 'g')
			{
				putchar(c);
			}
			c++;

		}
		putchar('\n');
		return (0);
}
