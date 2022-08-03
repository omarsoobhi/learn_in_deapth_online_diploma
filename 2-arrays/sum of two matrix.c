/*
 ============================================================================
 Name        : sum_of_two_matrix
 Author      : omarsoobhi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2];
	float b[2][2];
	float sum [2][2];
	int r,c;
	for (r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter first matrix elements (%d ,%d):",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);
		}
		printf("\r\n");
	}
	printf("the first matrix is \n");
	for (r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%2.2f\t", a [r][c]);
		}
		printf("\r\n");
	}
	for (r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter second matrix elements (%d ,%d):",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[r][c]);
		}
		printf("\r\n");
	}
	printf("the second matrix is \n");
	for (r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%2.2f\t", b [r][c]);
		}
		printf("\r\n");
	}
	for (r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum [r][c]= a[r][c]+b[r][c];
		}
		printf("\r\n");
	}
	printf("the sum is \n");
	for (r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%2.2f\t", sum[r][c]);
		}
		printf("\r\n");
	}

}
