/*
 * main.c
 *
 *  Created on: 27 Sep 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
int ones_between_zeros(int num);//fun prototype(declaration)
int main()
{
	int num;
	printf("Enter a decimal number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);//insert decimal number
	printf("\nmax ones between two zeros =%d",ones_between_zeros(num));//fun call
	return 0;
}
int ones_between_zeros(int num)//function return number of ones between two zeros in binary
{
	int binary[100]={},i=0,flag=0,count=0,mx=0;//array to store binary of decimal number
	printf("binary of %d is : ",num);
	while(num != 0)//loop to convert decimal to binary
	{
		if(num%2==0)//if number divisible by 2 then store 0 in array
		{
			binary[i++]=0;
		}
		else//else store 1 in array
		{
			binary[i++]=1;
		}
		num/=2;
	}
	for(int j=i ;j>=0;j--)//print binary of decimal number and count number of ones
	{
		printf("%d",binary[j]);
		if(flag==0)//if we at first zero
		{
			if(binary[j]==0)
			{
				flag=1;//to help with next zero
			}
			else
			{
				count++;//count number of ones
			}
		}
		if(binary[j]==0 && flag==1)//if we at second zero
		{
			flag=0;//put flag=0 if there is another zero
			mx=count>mx?count:mx;//for find max of ones between two zeros
			count=0;//to calculate next number of ones
		}
	}
	return mx;//return max number
}
