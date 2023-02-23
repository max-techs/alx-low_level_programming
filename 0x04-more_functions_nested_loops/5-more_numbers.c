#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 14
  *
  */
void more_numbers(void)
{
	int out, in;
	int tens, unit;

	for (out = '0'; out <= '9'; out++)
	{
		for (in = 0; in <= 14; in++)
		{
			if (in >= 0 && in <= 9)
			{
				_putchar(in + '0');
			}
			else
			{
				tens = in / 10;
				unit = in % 10;
				_putchar(tens + '0');
				_putchar(unit + '0');
			}
		}
		_putchar('\n');
	}
}
