#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @i: input as a number
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int i)
{
	for (i <= 0 || i > 0)
	{
		_putchar (i %10);
		return (i %10);
	}
}
