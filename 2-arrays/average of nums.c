/*
 ============================================================================
 Name        : average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[100] ,avg ,sum =0;
	int n,r;
	printf("enter number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	if (n<0 || n>100)
	{
		printf("errrror");
	}
	else
	{
		for (r=0;r<n;r++)
		{
			printf("enter element (%d):",r);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r]);
			sum= sum +a [r];
			printf("\r\n");
		}
	}
	avg=sum/n;
	printf("the average is %2.2f\t:", avg);
	printf("\r\n");
}
