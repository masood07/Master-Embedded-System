/*
 * EX3.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */

#include <stdio.h>

void main ()
{
	int num1,num2;
	printf("Enter two integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("sum: %d",num1+num2);
}
