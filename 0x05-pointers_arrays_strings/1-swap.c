#include<stdio.h>
/**
 * swap_int - swaps value of two integers using two input parameters
 * 
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Always 0(Success)
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
