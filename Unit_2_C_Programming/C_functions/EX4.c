/*
 * EX4.c
 *
 *  Created on: 13 Sep 2022
 *      Author: TAREK MASOOD
 *  project name:C program to Calculate the power of a number using recursion
 */
#include "stdio.h"
int power(int num,int pow); //function prototype
int main ()
{
	int num,pow;
	printf("Enter base number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);
	printf("Enter power number(positive integer): ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&pow);
	printf("%d^%d = %d",num,pow,power(num,pow)); //function call
}
int power(int num,int pow)//function definition
{
	if(pow>1)
	{
		return num * power(num,pow-1); //recursive

	}
}
