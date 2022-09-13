/*
 * EX3.c
 *
 *  Created on: 13 Sep 2022
 *      Author: TAREK MASOOD
 *  project name:C program to Reverse sentence using recursion
 */
#include "stdio.h"
void Reverse();//function prototype
int main ()
{
	printf("Enter a sentence: ");
	fflush(stdin);  fflush(stdout);
	Reverse();//call function
}
void Reverse()
{//store each character in stack and print when return
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
		Reverse();//recursive
		printf("%c",c);
	}
}
