#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints out alphabet in lowercase
 * Description: this prins out string
 * Return: 0 if success.
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
