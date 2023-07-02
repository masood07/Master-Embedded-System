/*
 * Ex6.c
 *
 *  Created on: 6 Sep 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(int i=1 ; i<=n ;i++)
	{
		sum+=i;
	}
	printf("sum=%d",sum);

}

