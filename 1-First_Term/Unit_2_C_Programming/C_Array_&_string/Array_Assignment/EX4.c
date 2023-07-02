/*
 * EX4.c
 *
 *  Created on: 9 Sep 2022
 *      Author: TAREK MASOOD
 */

#include <stdio.h>

int main() {
	int n=0,nom=0,loc=0,arr[10],j;
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
	printf("\nEnter the element to be inserted : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&nom);
	//Enter location
	printf("Enter the location : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&loc);
	// 1 2 3 4 5
	// 0 1 2 3 4 5 loc=2
	for(j=n ; j>loc-1 ; j--)
	{
		arr[j]=arr[j-1];
	}
	//insert element at mentioned location
	arr[j]=nom;
	//print new array
	for(int i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}
}
