/*
 * Ex1.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
void main()
{
	int num;
	printf("Enter an integer you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
}

