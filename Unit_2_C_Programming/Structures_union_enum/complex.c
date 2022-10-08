/*
 * complex.c
 *
 *  Created on: 8 Oct 2022
 *      Author: TAREK MASOOD
 */
#include<stdio.h>
//structure definition
struct Scomplex
{
	float real;//real member
	float imaginary;//imaginary member
};
struct Scomplex add (struct Scomplex c1,struct Scomplex c2);
int main()
{
	struct Scomplex c1,c2,sum;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&c1.real,&c1.imaginary);
	printf("For 2st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&c2.real,&c2.imaginary);
    sum=add(c1,c2);
	printf("Sum=%g+%gi",sum.real,sum.imaginary);

	return 0;
}
struct Scomplex add (struct Scomplex c1,struct Scomplex c2)
{
	struct Scomplex sum;
	sum.real=c1.real+c2.real;
	sum.imaginary=c1.imaginary+c2.imaginary;
	return sum;
}
