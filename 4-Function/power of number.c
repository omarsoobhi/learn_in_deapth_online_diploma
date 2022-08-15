/*
 ============================================================================
 Name        : power.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int num_and_power(int x ,int y);
int main(void) {
	int x,y;
	printf("enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&x);
	printf("enter a power:");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&y);
	printf("the result is %d",num_and_power(x,y));
	return 0;
}
int num_and_power(int x, int y)
{
	int sum =1;
lol:	if(y>0)
	{
	for(int i=y;i>0;i--)
		sum*=x;
	}
		return sum;
	}

