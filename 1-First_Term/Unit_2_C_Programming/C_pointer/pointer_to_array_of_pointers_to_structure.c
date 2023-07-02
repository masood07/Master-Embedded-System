/*
 *      pointer_to_array_of_pointers_to_structure.c
 *      Created on: 23 Jun 2023
 *      Author: TAREK MASOOD
 *      Sub:Write a program in C to show a pointer to an array which contents
are pointer to structure.
 */
#include<stdio.h>
struct employee
{
	char name[100];
	int ID;
};
int main()
{
	struct employee data={"Tarek",1000};
	//array of pointers point to structure
	struct employee *ps[1]={&data};
	//pointer to array of pointers
	struct employee *(*pps)[1]=&ps;
    // accessing data using the pointer to array of pointers
	printf("Employee Name :%s\nEmployee ID :%d\n\n",(*pps)[0]->name,(*pps)[0]->ID);
	return 0;
}

