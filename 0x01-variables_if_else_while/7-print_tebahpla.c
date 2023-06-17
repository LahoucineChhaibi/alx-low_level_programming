#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: always 0.
 */
int main(void)
{
	char Test;

	for (Test = 'z'; Test >= 'a'; Test--)
		putchar(Test);

	putchar('\n');

	return (0);
}
