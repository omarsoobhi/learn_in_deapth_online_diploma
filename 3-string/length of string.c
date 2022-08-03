/*
 ============================================================================
 Name        : length.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,length=0;
			char a[1000] ;
			printf("enter String :");
					fflush(stdin);fflush(stdout);
					gets(a);
					for(i=0 ; a[i] !='\0';i++)
							{
									length=length+1;
							}
					printf("string length is: %d " ,length);
}
