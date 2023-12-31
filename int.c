#include "main.h"


/**
 * print_int_helper - ...
 * @n: ...
 * Return: len of number
 */
int print_int_helper(int n)
{
	int digit, ncpy, remainder, i = 0, len = 0, reverse = 0;

	ncpy = n;

	while (ncpy)
	{
		ncpy /= 10;
		len++;
	}
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	while (reverse > 0)
	{
		digit = reverse % 10;
		putchar (digit + '0');
		reverse /= 10;
		i++;
	}
	while (i++ < len)
		putchar('0');

	return (len);
}

/**
 * handle_int_min -print int min given
 * Return: len of INT_MAX
 */
int handle_int_min(void)
{
	char *my_int_min = "-2147483648";

		while (*my_int_min)
		{
			putchar(*my_int_min);
			my_int_min++;
		}
		return (11);
}
/**
 * print_int - print intgers
 * @ap: va_list
 * Return: length of int
 */
int print_int(va_list ap)
{
	int n, len = 0, isNeg = 0;

	n = va_arg(ap, int);
	if (n == INT_MIN)
	{
		len += handle_int_min();
		return (len);
	}
	if (n == 0)
	{
		putchar('0');
		return (1);
	}
	if (n < 0)
	{
		putchar('-');
		n *= -1;
		isNeg = 1;
	}
	len += print_int_helper(n);
	if (isNeg)
		len++;
	return (len);
}
