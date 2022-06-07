#include <stdio.h>
/**
 * main - Prints out alphabet in lowercase in reverse
 * Description: this prins out string
 * Return: 0 if success.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
