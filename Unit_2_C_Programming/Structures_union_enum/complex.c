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
struct Scomplex add (struct Scomplex c1,struct Scomplex c2);//add function prototype
int main()
{
	struct Scomplex c1,c2,sum;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&c1.real,&c1.imaginary);//insert real and img For 1st complex number
	printf("For 2st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&c2.real,&c2.imaginary);//insert real and img For 2nd complex number
    sum=add(c1,c2);//call add function
	printf("Sum=%g+%gi",sum.real,sum.imaginary);//print sum

	return 0;
}
//function return sum of two complex number
struct Scomplex add (struct Scomplex c1,struct Scomplex c2)
{
	struct Scomplex sum;
	sum.real=c1.real+c2.real;
	sum.imaginary=c1.imaginary+c2.imaginary;
	return sum;
}
