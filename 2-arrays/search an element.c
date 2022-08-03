/*
 ============================================================================
 Name        : search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i;
	float v;
	printf("enter number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	float a[n];
	int r;
	for (r=0;r<n;r++)
	{

		printf("enter element (%d):",r);
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[r]);

	}

	printf("enter the element you need to search:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&v);

	for(i=0; i< n;i++ )
	{
		if(v ==a[i])
		{
			printf("the element location is %d ",i+1);
		exit(0);
		}

	}

	printf("the element is not here");
}

