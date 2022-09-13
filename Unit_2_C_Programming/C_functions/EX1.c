/*
 * EX1.C
 *
 *  Created on: 13 Sep 2022
 *  Author: TAREK MASOOD
 *  project name:Prime numbers between two intervals by making
 *  user-defined function
 */
#include "stdio.h"
int check_prime(int a);//function prototype
int main ()
{
	int a,b,flag;
	printf("Enter two number(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("prime numbers between %d and %d are: ",a,b);
	//loop all numbers between a & b
	for(int i=a+1;i<b;i++)
	{
		//function call
		flag=check_prime(i);
		if(flag==1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
int check_prime(int a)// function definition
{
	int flag=1;
	for(int i=2;i<a/2;i++)
	{
		//check not prime
		if(a%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}


