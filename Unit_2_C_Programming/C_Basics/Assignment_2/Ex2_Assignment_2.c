/*
 * Ex2.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */

#include <stdio.h>
void main()
{
	//A=65  a=97
char c;
printf("Enter an alphabet : ");
fflush(stdin); fflush(stdout);
scanf("%c",&c);
if(c=='a' || c=='A' || c=='E' || c=='e' || c=='i' || c=='I'  || c=='o' || c=='O' || c=='U' || c=='u')
{
printf("%c is a vowel",c);
}
else
{
	printf("%c is a consonant",c);
}
}

