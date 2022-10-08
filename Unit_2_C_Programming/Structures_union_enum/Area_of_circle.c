/*
 * Area_of_circle.c
 *
 *  Created on: 8 Oct 2022
 *      Author: TAREK MASOOD
 */
#include<stdio.h>
#define PI 3.14
#define Area(r)(PI*(r)*(r))
int main()
{
	int radius;
	float Area;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&radius);
	Area=Area(radius);
	printf("Area=%g",Area);
	return 0;
}
