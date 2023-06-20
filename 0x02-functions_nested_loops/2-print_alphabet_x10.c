#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	Testar Test;
	int i;

	i = 0;

	while (i < 10)
	{
		Test = 'a';
		while (Test <= 'z')
		{
			_putTestar(Test);
			Test++;
		}
		_putTestar('\n');
		i++;
	}
}
