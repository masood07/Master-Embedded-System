/*
 * main.c
 *
 *  Created on: 27 Sep 2022
 *      Author: TAREK MASOOD
 */

#include<stdio.h>
#include<string.h>
void reverse(char num[],char num2[],int size);//reverse prototype(declaration)
int main ()
{
	char num[100],num2[100];
	printf("Enter number : ");
	fflush(stdin); fflush(stdout);
	gets(num);//input string
	reverse(num,num2,strlen(num));//function call
	for(int i=0;i<strlen(num);i++)//print reverse digit in number
	{
		printf("%d",num2[i]-'0');
	}
	return 0;
}
void reverse(char num[],char num2[],int size)//function reverse digits in number
{
	printf("reverse of number : ");
	for(int i=size-1,j=0;i>=0;i--,j++)
	{
		num2[i]=num[j];
	}
}
