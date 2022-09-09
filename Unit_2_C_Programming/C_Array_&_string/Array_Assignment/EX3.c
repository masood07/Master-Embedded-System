/*
 * EX3.c
 *
 *  Created on: 9 Sep 2022
 *      Author: TAREK MASOOD
 */
#include "stdio.h"
int main()
{
	// C Program to Find Transpose of a Matrix
	int a[50][50];
	int row,col;
	printf("Enter rows and column of matrix:");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&row,&col);

	//enter element
	printf("\nEnter elements of matrix:\n");
	for(int i =0 ; i < row ; i++)
	{
		for(int j =0 ; j < col ; j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	//print matrix
	printf("\nEntered Matrix:\n");
	for(int i =0 ; i < row ; i++)
	{
		for(int j =0 ; j < col ; j++)
		{
			printf("%d ",a[i][j]);

		}
		printf("\n");
	}
	//print transpose
	printf("\nTranspose of Matrix:\n");
	for(int i =0 ; i < col ; i++)
	{
		for(int j =0 ; j < row ; j++)
		{
			printf("%d ",a[j][i]);

		}
		printf("\n");
	}
}
