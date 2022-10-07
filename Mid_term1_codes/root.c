/*
 * main.c
 *
 *  Created on: 26 Sep 2022
 *      Author: TAREK MASOOD
 */
#include<stdio.h>
#include<math.h>
double square_root(int num);//square_root prototype(declaration)
int main ()
{
	int num;
	printf("Enter number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("square_root of %d =%g",num,square_root(num));//function call
}
double square_root(int num)//function that return square_root of number
{
	return sqrt(num);
}
