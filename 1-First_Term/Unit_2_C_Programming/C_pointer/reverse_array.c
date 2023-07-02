/*
 *      reverse_array.c
 *      Created on: 22 Jun 2023
 *      Author: TAREK MASOOD
 *      Subject: print the elements of an array in reverse order
 */
#include <stdio.h>
int main()
{
	int a[15];
	int* pa=(int*)&a;
      //insert elements
	for(int i=0;i<5;i++)
	{
		printf("element -%d:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",pa+i);
	}

	printf("\nThe elements of array in reverse order are :\n\n");
	//print reverse elements
	for(int i=4;i>=0;i--)
	{
		printf("element -%d: %d\n",i+1,*(pa+i));
	}

}

