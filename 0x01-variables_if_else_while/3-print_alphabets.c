#include <stdio.h>
/**
 * main
 * Prints the alphabet in lowercase, and then in uppercase.
 * Return always 0
 */
int main(void)
{
char alphABET = 'a';
while (alphABET <= 'z')
{
putchar(alphABET);
alphABET++;
}
alphABET = 'A';
while (alphABET <= 'Z')
{
putchar(alphABET);
alphABET++;
}
putchar('\n');
return (0);
}
