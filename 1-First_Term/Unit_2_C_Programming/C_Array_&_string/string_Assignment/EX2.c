/*
 * EX2.c
 *
 *  Created on: 9 Sep 2022
 *      Author: TAREK MASOOD
 */
#include "stdio.h"
#include "string.h"
int main ()
{
	//C Program to Find the Length of a String
	char st [100];
	int count=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(st);
	//find length
	while( st[count] != 0 )
	{
		count++;
	}
	//print length
	printf("length of string: %d",count);
}

