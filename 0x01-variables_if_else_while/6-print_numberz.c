#include <stdio.h>

/**
 * main - Prints all single digit Testbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: always 0.
 */
int main(void)
{
	int Test;

	for (Test = 0; Test < 10; Test++)
		putchar((Test % 10) + '0');

	putchar('\n');

	return (0);
}
