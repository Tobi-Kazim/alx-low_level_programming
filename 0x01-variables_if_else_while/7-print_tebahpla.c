#include <stdio.h>

/**
 * main - Entry to the program
 *
 * Return: 0 is Success
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
