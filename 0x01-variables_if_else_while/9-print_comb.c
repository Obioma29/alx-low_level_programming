#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry point
 * Description:Singlr digits to 9 with a comma
 * Return: Always (0)
 */

int main(void)

{
	int c = 0;

	while (c <= 9)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar (',');
			putchar (' ');
		}
		c++;

	}
	putchar ('\n');
	return(0);

}
