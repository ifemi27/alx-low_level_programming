#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in reverse order in lowercase.* Return: 0
 */
intmain(void)
{
  char c;

  for (c = 'z'; c >= 'a'; c--)
    {
      putchar(c);
    }
  putchar('\n');

  return (0);
}
