#include <stdio.h>
/**
 * main- Entry point
 *
 * return: Success(0)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a != b && b != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a + b + c != 27)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
