/*
 * main.c
 *
 *  Created on: 25 Sep 2022
 *      Author: TAREK MASOOD
 */
#include<stdio.h>
#include<string.h>
int sum_dig(char num[],int size);//sum_dig prototype(declaration)
int main ()
{
	char num[100];
	printf("Enter number : ");
	fflush(stdin); fflush(stdout);
	gets(num);//insert string
	printf("sum all digits=%d",sum_dig(num,strlen(num)));//function call
	return 0;
}
int sum_dig(char num[],int size)//function return sum all digits
{
	int i,sum=0;
	for(i=0;i<size;i++)//each char and turn it into integer then calculate sum of all digits
	{
		sum+=(num[i]-'0');
	}
	return sum;
}
