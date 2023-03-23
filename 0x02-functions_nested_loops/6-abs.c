#include "main.h"
/**
 * _abs: Compute of the absolute value of an integer.
 *
 *@i: input number as an integer
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
