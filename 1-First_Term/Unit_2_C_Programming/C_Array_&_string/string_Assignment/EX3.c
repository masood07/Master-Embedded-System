/*
 * EX3.c
 *
 *  Created on: 9 Sep 2022
 *      Author: TAREK MASOOD
 */

#include "stdio.h"
#include "string.h"
int main ()
{
	// C Program to Reverse String Without Using Library Function
	char st [100],swap;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(st);
	//swap last char with first
	for(int i=0,j=strlen(st)-1 ; i<strlen(st)/2 ; i++,j--)
	{
		swap=st[j];
		st[j]=st[i];
		st[i]=swap;
	}
	printf("Reverse string is : %s",st);
}
