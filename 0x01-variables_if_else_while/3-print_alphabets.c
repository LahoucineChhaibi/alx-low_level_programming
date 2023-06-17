#include <stdio.h>
/**
 * main - main block
 * Prints the alphabet in lowercase, and then in uppercase.
 * Return always 0
 */
int main(void)
{
	char Test;

	for (Test = 'a'; Test <= 'z'; Test++)
		putchar(Test);

	for (Test = 'A'; Test <= 'Z'; Test++)
		putchar(Test);

	putchar('\n');

	return (0);
}}
