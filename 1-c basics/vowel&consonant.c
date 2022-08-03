/*
 ============================================================================
 Name        : first_lec(homework).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number ;
	printf("please enter an integer number :");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &number) ;
	if(number % 2 ==1)
	{
		printf("the number you entered is odd");
	}
	else
		printf("the number you entered is even");
}
