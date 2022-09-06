/*
 * Ex4.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
void main()
{
float a;
printf("Enter a number : ");
fflush(stdin); fflush(stdout);
scanf("%f",&a);
if(a<0)
{
	printf("%2.2f is negative",a);
}
else if(a>0)
{
	printf("%2.2f is positive",a);
}
else
{
	printf("you entered zero");
}
}
