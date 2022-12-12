#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Possible different combination of two digits
 * Numbers seperated by comma followed by a space
 * 01 and 10 are considered the same combination of two digits
 * Print smallest combination of two digits
 * Numbers in ascending order
 *
 * Return: (0)
 */

int main(void)

{
	int c;

	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
			putchar('\n');
			return (0);
	}
