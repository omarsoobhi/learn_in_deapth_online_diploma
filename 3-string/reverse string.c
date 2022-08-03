/*
 ============================================================================
 Name        : reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[100] ,rev;
	printf("enter string you would to reverse:");
	fflush(stdin);fflush(stdout);
	gets(a);
	for (int i=0;i< strlen(a);i++)
	{
		int j =strlen(a)-1;

			rev=a[i];
			a[i]=a[j];
			a[j]=rev;
			j--;

	}
printf("\n the reverse of string you enterd is : %s",&a);
}
