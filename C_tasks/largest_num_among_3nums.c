/*
 ============================================================================
 Name        : largest_num_among_3nums.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b , c;
	printf("please enter the first number :");
	fflush(stdin);fflush(stdout);
	scanf("%f", &a);
	printf("please enter the second number :");
	fflush(stdin);fflush(stdout);
	scanf("%f", &b);
	printf("please enter the third number :");
	fflush(stdin);fflush(stdout);
	scanf("%f", &c);
	if(a > b & a > c)
	{
		printf("%f" ,a);
	}
	else if(b > a & b > c)
	{
		printf("%f" ,b);
	}
	else
	{
		printf("%f" ,c);
	}
}
