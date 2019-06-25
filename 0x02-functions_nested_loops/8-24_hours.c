#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int minutes = 0;
	int hours = 0;
	int m_remainder;
	int h_r;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	m_remainder = minutes % 10;
	h_r = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(h_r + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(m_remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}
