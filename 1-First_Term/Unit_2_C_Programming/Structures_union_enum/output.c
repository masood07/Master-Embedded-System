/*
 * output.c
 *
 *  Created on: 8 Oct 2022
 *      Author: TAREK MASOOD
 */

#include <stdio.h>
union job { //defining a union
	char name [32];
	float salary;
	int worker_no;
}u;

struct job1 {
	char name [32];
	float salary;
	int worker_no;
}s;
int main(){
	printf("size of union =%d", sizeof(u));//32
	printf("\nsize of structure = %d", sizeof(s));//32+4+4
	return 0;
}

