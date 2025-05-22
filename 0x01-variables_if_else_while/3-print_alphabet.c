#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 is Success
 *
 */
int main(void)
{
	char ch = 'a';
	char cr = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cr <= 'Z')
	{
		putchar(cr);
		cr++;
	}
		putchar('\n');
		return (0);
}
