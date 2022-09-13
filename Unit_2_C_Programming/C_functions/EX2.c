/*
 * EX2.c
 *
 *  Created on: 13 Sep 2022
 *  Author: TAREK MASOOD
 *  project name:C program to calculate factorial of a number using recursion
 */
#include "stdio.h"
int factorial(int a);//function prototype
int main ()
{
	int num;
	printf("Enter an positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("factorial of %d = %d",num,factorial(num));//function call
	return 0;
}
int factorial(int a)//function definition
{
	if(a!=1)
	return a*factorial(a-1);//recursive
}
