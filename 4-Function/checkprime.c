/*
 ============================================================================
 Name        : CheckPrime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int CheckPrime (int n);

int main(void) {
	int n1,n2,prime,i;
	printf("enter the range");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("the prime numbers between the range you entered are:");
	for(i=n1+1;i<n2;++i)
	{
		prime =CheckPrime(i);
		if (prime ==1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

int CheckPrime(int n) {
	int j ,prime=1;
	for(j=2;j< n/2;++j)
	{
		if (n %j==0)
		{
			prime =0;
		}
	}
	return prime;
}

