#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return: always 0.
 */
int main(void)
{
	char Test;

	for (Test	= 'a'; Test <= 'z'; Test++)
		putchar(Test);

	putchar('\n');

	return (0);
}
