/*This program will take 2 positive int from the user,
and display all the number divisible by 3 between these 2 integers*/
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Enter 2 positive integers: \n");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		int c = a;
		a = b;
		b = c;
	}
	printf("Numbers divisible by 3 between 2 integers above: \n");
	for (int i = a, d = 0; i <= b; i++)
	{
		if (i % 3 == 0)
		{
			printf("");
			printf("%6d ", i);
			d++;
			if (d % 10 == 0)
				printf("\n");
		}
	}
}