#include <stdio.h>

/**
 * main - Entry to the program
 *
 * Return: 0 is Success
 *
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
