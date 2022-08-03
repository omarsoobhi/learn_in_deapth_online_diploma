/*
 ============================================================================
 Name        : sum_of_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,n ,sum=0 ;
	printf("please enter number :");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&n);
	for(i=0 ; i<=n ;i++)
	{
		sum=sum+i;
	}
	printf("the sum is %d",sum);
}
