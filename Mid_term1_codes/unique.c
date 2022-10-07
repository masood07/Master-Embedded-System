/*
 * main.c
 *
 *  Created on: 27 Sep 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
int unique(int arr[],int size);//unique prototype
int main()
{
	int arr[100],size;
	printf("Enter size of array : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);//size of array
	printf("Enter elements of array : ");
	fflush(stdin); fflush(stdout);
	for(int i=0;i<size;i++)//loop for entering elements
	{
		scanf("%d",&arr[i]);
	}
	printf("unique number is: %d",unique(arr,size));//function call
	return 0;
}
int unique(int arr[],int size)//function return unique number in array
{int num,flag=0;
	for(int i=0;i<size;i++)
	{
		num=arr[i];//store number in arr and check if unique or not
		flag=0;
		for(int j=0;j<size;j++)
		{
			if(i==j)//to not take the same number
			{
				continue;
			}
			else if(arr[j]==num)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)//if flag=0 return unique number
		{
			return num;
		}
	}
	return -1;//if all elements repeated then return -1
}
