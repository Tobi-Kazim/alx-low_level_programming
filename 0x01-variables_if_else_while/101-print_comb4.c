#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: 0 is success
 *
 */
int main(void)
{
	int i, j, k;
	for (i = 0;  i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if ((i != 8 || j != 9) && (i != 8 || k != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
