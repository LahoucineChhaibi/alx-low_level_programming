#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return 0.
 */
int main(void)
{
	char Test;

	for (Test = 'a'; Test <= 'z'; Test++)
	{
		if (Test != 'e' && Test != 'q')
			putchar(Test);
	}

	putchar('\n');

	return (0);
}
