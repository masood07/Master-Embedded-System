/*
 * EX5.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */

#include <stdio.h>
void main()
{
	char c;
	printf("Enter a charcter : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	// a=65 z=122 all alphabet
	if(65<=c && c<=122)
	{
		printf("%c is an alphabet",c);
	}
	else
	{
		printf("%c is not an alphabet",c);
	}
}
