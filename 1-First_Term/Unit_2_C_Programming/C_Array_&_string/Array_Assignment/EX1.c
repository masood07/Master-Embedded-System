/*
 * main.c
 *
 *  Created on: 9 Sep 2022
 *      Author: TAREK MASOOD
 */

#include "stdio.h"
int main()
{
	// Example of Multidimensional Array
	float a [2][2],b [2][2],sum[2][2];
	// Enter elements of 1st matrix
	printf("Enter the elements of 1st matrix\n");
	for(int i=0 ; i<2 ; i++) //Row of 1st matrix
	{
		for(int j=0 ; j<2 ; j++)//column of 1st matrix
		{
			printf("Enter a%d%d:",i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	// Enter elements of 2nd matrix & Sum of matrix
	printf("Enter the elements of 2nd matrix\n");
	for(int i=0 ; i<2 ; i++) //Row of 2nd matrix
	{
		for(int j=0 ; j<2 ; j++)//column of 2nd matrix
		{
			printf("Enter b%d%d:",i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&b[i][j]);
			sum[i][j] += a[i][j] + b[i][j];
		}
	}
	//print sum of matrix
	printf("sum of Matrix\n");
	for(int i=0 ; i<2 ; i++) //Row of sum matrix
	{
		for(int j=0 ; j<2 ; j++)//column of sum matrix
		{

			printf("%0.1f  ",sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}

