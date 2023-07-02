/*
 * EX2.c
 *
 *  Created on: 9 Sep 2022
 *      Author: TAREK MASOOD
 */

#include "stdio.h"
int main()
{
	// C Program to Calculate Average Using
	float ndata,number[100],sum=0;
	printf("Enter the number of data: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&ndata);
	for(int i=0 ; i < ndata ; i++)
	{
		printf("Enter number: ");
		fflush(stdin);  fflush(stdout);
		scanf("%f",&number[i]);
		//calculate sum
		sum+=number[i];
	}
	//print average
	printf("Average = %0.2f",sum/ndata);
}
