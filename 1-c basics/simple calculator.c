/*
 ============================================================================
 Name        : simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char op;
	float x ,y  ;
	printf("first number is :");
	fflush(stdin);fflush(stdout);
	scanf(" %f ", &x );
	printf("operation is (/or*or-or+) :");
	fflush(stdin);fflush(stdout);
	scanf(" %c ", &op );
	printf("second number is :");
	fflush(stdin);fflush(stdout);
	scanf(" %f ", &y );
	switch (op) {
	    case '+':
	      printf("%f + %f = %f", x, y, x + y);
	      break;
	    case '-':
	      printf("%f - %f = %f",  x, y, x - y);
	      break;
	    case '*':
	      printf("%f * %f = %f",  x, y, x * y);
	      break;
	    case '/':
	      printf("%f / %f = %f",  x, y, x / y);
	      break;

	  }

}
