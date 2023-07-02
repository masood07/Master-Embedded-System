/*
 * EX5.c
 *
 *  Created on: 9 Sep 2022
 *      Author: TAREK MASOOD
 */

#include <stdio.h>

int main()
{
	int n=0,nom=0,arr[10];
	printf("Enter no of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	//Enter elements of array
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//print array
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	// Enter element
	printf("\nEnter the element to be searched : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&nom);
	for(int i =0 ; i < n ; i++ )
	{
		if(arr[i]==nom)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}
}
