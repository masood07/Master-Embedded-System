/*
 * main.c
 *
 *  Created on: 26 Sep 2022
 *      Author: TAREK MASOOD
 */

#include<stdio.h>
#include<math.h>
void prime(int n1,int n2);//prime prototype(declaration)
int main ()
{
	int n1,n2;
	printf("Enter two numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&n1,&n2);
	prime(n1,n2);//function call
}
void prime(int n1,int n2)//function print all prime numbers between n1 & n2
{
	int arr[100],count=0,flag=0;//array to store prime numbers , variable to count numbers , flag to define if number is prime or not
	for(int i= n1+1;i<n2;i++)//loop all numbers between n1 to n2
	{
		flag=0;
		for(int j=2;j<=sqrt(i);j++)//loop to check prime number
		{
			if(i%j==0)//if value divisible by any number then it's not prime
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			if(i<=1)//prime is greater than 1
			{
				continue;
			}
			arr[count++]=i;
		}
	}
	printf("prime numbers between %d and %d :  ",n1,n2);
	for(int i=0;i<count;i++)//print prime numbers
	{
		printf("%d ",arr[i]);
	}
}
