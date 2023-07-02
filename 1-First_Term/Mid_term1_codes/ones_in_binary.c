/*
 * main.c
 *
 *  Created on: 27 Sep 2022
 *      Author: TAREK MASOOD
 */
#include<stdio.h>
void ones_in_binary(int num);//fun prototype(declaration)
int main()
{
	int num;
	printf("Enter a decimal number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	ones_in_binary(num);//fun call
	return 0;
}
void ones_in_binary(int num)//function count of ones in binary
{
	int binary[100]={},i=0,ones=0;//array to store binary of decimal number
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
			ones++;
		}
		num/=2;
	}
	for(int j=i ;j>=0;j--)//print binary of decimal number
	{
		printf("%d",binary[j]);
	}
	printf("\nso has %d one's",ones);//print number of ones
}
