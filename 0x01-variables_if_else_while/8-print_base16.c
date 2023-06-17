#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: always 0.
 */
int main(void)
{
	int Test;
	char Str;

	for (Test = 0; Test < 10; Test++)
		putchar((Test % 10) + '0');

	for (Str = 'a'; Str <= 'f'; Str++)
		putchar(Str);

	putchar('\n');

	return (0);
}
