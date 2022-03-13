#include <stdio.h>

/**
 * main - print single digit numbers
 * of base ten from zero, followed by a new line
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
