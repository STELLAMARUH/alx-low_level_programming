#include "<putchar.h"

/**
 * main - entry point
 *
 * Description: Prints alphabet with _putchar
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "putchar\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
