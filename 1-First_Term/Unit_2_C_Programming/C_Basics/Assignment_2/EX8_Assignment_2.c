/*
 * Ex7.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */

#include <stdio.h>
void main()
{
	char c;
	float a,b;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(c)
	{
	case '+':
	{
	printf("%1.1f",a+b);
	}
	break;
	case '-':
	{
	printf("%1.1f",a-b);
	}
	break;
	case '*':
	{
	printf("%1.1f",a*b);
	}
	break;
	case '/':
	{
	printf("%1.1f",a/b);
	}
	break;
	}
}
