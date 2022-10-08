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
	scanf("%f",&d1.feet);//insert 1st distance feet
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d1.inch);//insert 1st distance inch
	printf("Enter information for 2st distance\n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d2.feet);//insert 2st distance feet
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d2.inch);//insert 2st distance inch
	sum.feet=d1.feet+d2.feet;//add feet distance
	sum.inch=d1.inch+d2.inch;//add inch distance
	if(sum.inch>12)//1 feet=12 inch
	{
		sum.inch-=12;
		sum.feet++;
	}
	printf("sum of distances=%g\'-%g\"",sum.feet,sum.inch);//print sum
	return 0;
}
