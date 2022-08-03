/*
 ============================================================================
 Name        : insert.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("enter number of elemnts:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	float a[n];

	for(int c=0;c<n ;c++)
	{
		scanf("%f",&a[c]);
	}
	printf("\r\n");

}
