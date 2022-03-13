#include <stdio.h>
/**
 * main - main block
 * Description: Use 'putchar' to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
