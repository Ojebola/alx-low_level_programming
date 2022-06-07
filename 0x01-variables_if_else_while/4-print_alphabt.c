#include <stdio.h>
/**
 * main - Prints out alphabet in lowercase except for e and q
 * Description: this prins out string
 * Return: 0 if success.
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
