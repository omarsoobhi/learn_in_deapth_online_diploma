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

int main(void) {
	int n ,i ,sum=1;
	printf("please enter number :");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&n);
	if(n>0)
	{
		for(i=n ; i>0 ;i--)
		{
			sum=sum*i;
		}
		printf("the factorial of %d is %d",n ,sum);
	}
	else
		printf("erooooor");
}
