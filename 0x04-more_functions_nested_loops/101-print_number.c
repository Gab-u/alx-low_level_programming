include "main.h"

/**
 * print_number - prints integer
 * @n: input integer
 * Return: Always 0
 */
void print_number(void)
{
	unsigned int num, num2;
	int i;
	int hei = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num = n;
	num2 = num;

	if (num > 9)
	{
		while (num >= 10)
		{
			hei = hei * 10;
			num = num / 10;
		}
		_putchar((num2 / hei) + '0');
		hei = hei / 10;

		for (i = hei; i >= 1; i = i / 10)
			_putchar((num2 / i) % 10 + '0');
	}
	else
		_putchar(num + '0');
}
