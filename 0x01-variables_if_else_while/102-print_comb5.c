#include <stdio.h>

/**
 * main - Entry into a program
 *
 * Return: 0 is success
 *
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = 0 + 1; y <= 99; y++)
		{
			putchar('0' + x / 10);
			putchar('0' + x % 10);
			putchar(' ');
			putchar('0' + y / 10);
			putchar('0' + y % 10);
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
