#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit Testbers.
 *
 * Return: always 0.
 */
int main(void)
{
	int Test;

	for (Test = 0; Test <= 9; Test++)
	{
		putchar((Test % 10) + '0');
		if (Test == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
