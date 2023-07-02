/*
 * Ex7.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */


#include <stdio.h>

void main ()
{
	float a,b,swap;
	printf("Enter two integer a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter two integer b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	a=a+b;//a=30 (10+20)
	b=a-b;//b=10 (30-20)
	a=a-b;//a=20 (30-10)
	printf("After swapping, value of a = %1.1f \nAfter swapping, value of b = %1.2f",a,b);
}
