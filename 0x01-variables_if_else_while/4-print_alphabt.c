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
	
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
