/*
 * Add_to_distance.c
 *
 *  Created on: 8 Oct 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
//structure definition
struct Sdistance
{
	float inch;
	float feet;
};
int main()
{
	struct Sdistance d1,d2,sum;
	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d1.feet);
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d1.inch);
	printf("Enter information for 2st distance\n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d2.feet);
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>12)
	{
		sum.inch-=12;
		sum.feet++;
	}
	printf("sum of distances=%g\'-%g\"",sum.feet,sum.inch);
	return 0;
}
