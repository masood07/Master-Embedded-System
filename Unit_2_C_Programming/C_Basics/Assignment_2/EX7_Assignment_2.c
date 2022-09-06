/*
 * Ex7.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */

#include <stdio.h>
void main()
{
	int n,fact=1;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n<0)
	{
		printf("Factorial of negative number does not exist");
	}
	else if(n==0)
	{
		printf("0");
	}
	else{
		for(int i=1 ; i<=n ;i++)
		{
			fact*=i;
		}
		printf("factorial=%d",fact);
	}

}
