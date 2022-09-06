/*
 * Ex3.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
void main()
{
	float a,b,c;
	printf("Enter three numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Largest number = %2.3f",a);
		}
		else
		{
			printf("Largest number = %2.3f",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("Largest number = %2.3f",b);
		}
		else
		{
			printf("Largest number = %2.3f",c);
		}
	}
}

