#include <stdio.h>
/**
 * main - prints all numbers from 0 to 9
 * followed by a line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
