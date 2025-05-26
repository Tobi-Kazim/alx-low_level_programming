#include <stdio.h>
/**
 * main - Entry into the program
 *
 * Return: 0 is Success
 *
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar('0' + x);
		x++;
		putchar(',');
		putchar(' ');
		
	}
	putchar('\n');
	return (0);
}
