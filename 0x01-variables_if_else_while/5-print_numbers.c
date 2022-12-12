#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: standard base 10 with single digit
 *
 * Return: (0)
 */

int main(void)

{
	char i = '0';

	while (i <= '9')
	{
		printf("%c\n", i);
		i++;
	}

	return (0);
}



