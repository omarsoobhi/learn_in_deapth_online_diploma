/*
 ============================================================================
 Name        : trans_of.c
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
	printf("enter size of matrix(n X n):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	float a[n][n];
	float t[n][n];
	int r,c;
	for (r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("enter element (%d ,%d):",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);
		}
		printf("\r\n");
	}
	printf("the array is \n");
	for (r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%2.2f\t", a [r][c]);
		}
		printf("\r\n");

	}
	printf("the transpose is \n");
	for (r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			t[r][c]=a [c][r];
		}
	}
	for (r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%2.2f\t", t [r][c]);
		}
		printf("\r\n");
	}
}
