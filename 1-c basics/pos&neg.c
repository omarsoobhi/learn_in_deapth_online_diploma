/*
 ============================================================================
 Name        : pos&neg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a;
	printf("please enter number :");
	fflush(stdin);fflush(stdout);
	scanf("%f", &a);
	if (a>0)
	{
		printf("the number you have entered is positive");
	}
	else if (a<0)
	{
		printf("the number you have entered is negative");
	}
	else
		printf("the number you have entered is zero");
}
