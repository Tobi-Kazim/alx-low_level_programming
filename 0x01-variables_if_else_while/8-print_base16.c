#include <stdio.h>

/**
 * main - Entry to the program
 *
 * Return: 0 is Success
 *
 */
int main(void)
{
	char hex_digit[] = "0123456789abcdef";
	int a = 0;

	while (a < 16)
	{
		putchar(hex_digit[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
