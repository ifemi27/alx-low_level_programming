#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * followed by a new line, except q and e
 * Return: Always 0 (success)
 **/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
