/*
 ============================================================================
 Name        : alphabet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s;
	float x ,y ,res ;
	printf("first number is :");
	scanf(" %f ", &x );
	printf("operation is (/or*or-or+) :");
	scanf(" %c ", &s );
	printf("second number is :");
	scanf(" %f ", &y );

	if (s== '+')
	{
		res=x+y;
		printf("the result is : %f" ,res);
	}
	else if (s== '-')
	{
		res=x-y;
		printf("the result is : %f" ,res);

	}
	else if (s== '*')
	{
		res=x*y;
		printf("the result is : %f" ,res);

	}
	else if (s== '/')
	{
		res=x/y;
		printf("the result is : %f" ,res);
	}
}
