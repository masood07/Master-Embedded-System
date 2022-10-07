/*
 * main.c
 *
 *  Created on: 27 Sep 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
void reverse(int a[],int b[],int size);//reverse prototype (declaration)
int main()
{
	int a[100],b[100],size;
	printf("Enter size of array : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);//size of array
	printf("Enter elements of array : ");
	fflush(stdin); fflush(stdout);
    for(int i=0;i<size;i++)//enter elements of array
    {
    	scanf("%d",&a[i]);
    }
    reverse(a,b,size);//function call
	printf("reverse of array : ");
    for(int i=0;i<size;i++)//print reverse of array
    {
    	printf("%d ",b[i]);
    }
	return 0;
}
void reverse(int a[],int b[],int size)//function find reverse of array
{
	for(int i=size-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
}
