/*
 ============================================================================
 Name        : frequency.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int freq=0 ,i;
		char a[1000] ,letter;
		printf("enter Sentence :");
		fflush(stdin);fflush(stdout);
		gets(a);
		printf("enter letter to find frequency:");
		fflush(stdin);fflush(stdout);
		scanf("%c",&letter);

		for(i=0 ; a[i] !='\0';i++)
		{
			if(letter==a[i])
				freq=freq+1;
		}
		printf("frequancy is: %d " ,freq);
		return 0;
}
