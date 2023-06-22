/*
 * pointer_handling.c
 *  Created on: 22 Jun 2023
 *      Author: TAREK MASOOD
 *      subject:Write a program in C to demonstrate how to handle the pointers
 *          in the program.
 */
#include <stdio.h>
int main()
{
	int m=29,*pm=&m;
	printf("Address of m : 0x%x \n Value of m:%d\n\n",(unsigned int)pm,*pm);
	//Now ab is assigned with the address of m.
     int *ab=&m;
 	printf("Address of pointer ab : 0x%x \n content of pointer ab:%d\n\n",(unsigned int)ab,*ab);
     //The value of m assigned to 34 now.
 	*ab=34;
 	printf("Address of pointer ab : 0x%x \n content of pointer ab:%d\n\n",(unsigned int)ab,*ab);
    //The pointer variable ab is assigned with the value 7 now.
 	*ab=7;
	printf("Address of m : 0x%x \n Value of m:%d\n\n",(unsigned int)ab,*ab);

}

