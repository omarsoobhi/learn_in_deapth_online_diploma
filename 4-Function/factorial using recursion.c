/*
 ============================================================================
 Name        : factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int x);
int main(void) {
	int x;
	printf("enter a positive integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&x);
	printf("the factorial of %d is %d",x,factorial(x));
	return 0;
	}
	int factorial(int n)
	{
		if(n>0)
		{
			n=n*factorial(n-1);
			return n;

	}
		else
			n=1;
		return n;
}
