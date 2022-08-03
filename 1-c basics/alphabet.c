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
	char c;
	printf("please Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	if (c >='a' && c<= 'z')
	{
		printf("char you have entered is in alphapet");
	}
	else
		printf("char you have entered is not in alphapet");
}
