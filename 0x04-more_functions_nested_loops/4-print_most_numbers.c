#include "main.h"

/**
 * main - a num that print 0 to 9 except 2 and 4
 *
 * Return: Always 0.
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (!(a == '2' || a == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
