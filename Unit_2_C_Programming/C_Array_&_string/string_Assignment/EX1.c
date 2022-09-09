/*
 * EX1.c
 *
 *  Created on: 9 Sep 2022
 *      Author: TAREK MASOOD
 */
#include "stdio.h"
#include "string.h"
int main ()
{
	// C Program to Find the Frequency of Characters in a String
	char st [100],ch,count=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(st);
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	//calculate frequency of character
	for(int i=0 ; i<strlen(st) ; i++ )
	{
		if(st[i]==ch)
		{
			count++;
		}
	}
	//print frequency of character
	printf("frequency of %c = %d",ch,count);
}
