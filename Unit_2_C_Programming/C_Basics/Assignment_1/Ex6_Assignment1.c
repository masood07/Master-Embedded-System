/*
 * Ex6.c
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
	swap=a;
	a=b;
	b=swap;
	printf("After swapping, value of a = %1.1f \nAfter swapping, value of b = %1.2f",a,b);
}
