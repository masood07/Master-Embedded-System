/*
 * main.c
 *
 *  Created on: 27 Sep 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
int sum();//unique prototype
int main()
{
	printf("sum from 1 to 100 = %d",sum());//fun call
	return 0;
}
int sum()//function return sum of numbers between 1 to 100
{
	return 100*(100+1)/2;
}
