#include <stdio.h>
/**
 * main - prints out all base 10 single digit numbers from 0
 * followed by a new line, using putchar
 * Description: this prints out single numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
